#include <stdio.h> 

int main(void)
{
    double f_temp; 
    double c_temp;

    printf("Please enter the Fahrenheit temperature: ");
    scanf("%lf", &f_temp);
    
    c_temp = 5.0 / 9.0 * (f_temp - 32);
    printf("The Celsius temperature is %lf.\n", c_temp);

    return 0;
}