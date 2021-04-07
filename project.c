#include<stdio.h>
#include<stdlib.h>
#include"setup.h"
#include<string.h>



float check_str_or_char(char *);  //function prototype
float data_avg();  // function prototype
float cal_to_fahren(double); // function prototype
float fahren_to_cel(double); // funcation prototype
int main() {

    double data = 0;
    double fah_data = 0;
    double cel_data = 0;
    while(1)   // continues/infinite loop
    {
        data = data_avg();  // function call which returns average value of 10 data
       // printf("%.1lf\n", data); // printing data with 0.1 resolution
        fah_data = cel_to_fahren(data);  // to convert the data from celsius to fahrenhite
        //if the sensor output data is in terms of degree celsius
        cel_data = fahren_to_cel(data);  // to convert the data from fahrenhite to celsius
        //if the sensor output data is in terms of degree fahrenhite
        printf("%.1lf degree fahrenhite\n", fah_data); // printing the data with .1 resolution
        printf("%.1lf degree celsius\n ", cel_data);  // printing data with .1 resolution
        printf("\n");
    }
    return 0;
}
