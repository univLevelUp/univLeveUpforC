#include <stdio.h>
#define day 12

int main(void)
{
    int days[day] ={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    for(int i = 0; i < day; i++)
    {
        printf("The month of %d is the last day of %d.\n", i, days[i]);
    }
    return 0;
}