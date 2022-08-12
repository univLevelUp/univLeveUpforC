#include <stdio.h>

#define RATE 0.07
#define INVESTMENT 10000000
#define YEARS       10

int main(void)
{
    int i;
    double total = INVESTMENT;

    printf("==============\n");
    printf("year   investment\n");
    printf("==============\n");
    
    for(i = 1; i<=YEARS; i++)
    {
        total = total * ( 1 + RATE);
        printf("%2d %10.1f\n", i, total);
    }
    return 0;
}