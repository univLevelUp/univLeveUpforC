#include <stdio.h>

int main(void)
{
    int x, tens, units;
    
    printf("Please enter an integer.: ");
    scanf("%d", &x);

    tens = x / 10;
    units = x % 10;

    printf("tens:%d\n", tens);
    printf("units:%d\n", units);
    return 0;
}