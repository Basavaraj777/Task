#ifndef SETUP_H_INCLUDED
#define SETUP_H_INCLUDED

char str[10];  // for the data from console
double number;  // to store the data
int check_number; // for the status of the return value

float check_str_or_char(char str[])     // to check weather the data contains string or character
{
    int len;
    len = strlen(str);
    for(int i = 0; i<len;++i)
    {
        if((str[i] >= '0' && str[i] <= '9') || (str[i] == '.'))
            {

            }
        else
             return -1;   //if the data contains single character then it returns 1
    }

     return 1;        //if the data is integer or float then it returns 1
}

float data_avg()
{
    int i = 0;
    double avg_value = 0;
    while(i!=10)
    {
        printf("Enter %d values :", (10-i));
        scanf("%s", str);
        check_number = check_str_or_char(str); // function call which checks the data and returns its status
        if(check_number != 1)   // if return value is non-zero then it displays incorrect data
        {
            printf("incorrect data\n");
            continue;
        }
        else
        {
            number = atof(str);    // converts the sting to floating number which returns double value
            avg_value += number;   // taking average of 10 numbers
            ++i;   // it only increments if the data is correct
        }

    }

    avg_value /= 10;  // taking the average value by diving it by 10 samples
    return avg_value;  // returning floating average value
}


float cel_to_fahren(double data)
{
    double fahren_data = 0;
    fahren_data = (((data * 9.0) / 5.0) + 32.0);
    return fahren_data;
}

float fahren_to_cel(double data)
{
    double celsius_data = 0;
    celsius_data = (((data - 32.0) *5.0) /9.0);
    return celsius_data;
}




#endif // SETUP_H_INCLUDED
