#include <stdio.h>

int main(void)
{
    double initial, current;
    int halflife;
    int years = 0;
    
    printf("halflife: ");
    scanf("%d", &halflife);
    
    initial = 100;
    current = initial;

    while (current > initial * 0.1)
    {
        years += halflife;
        current = current / 2.0;
        printf("%d: current=%f\n",years, current);
    }

    printf("1/10 =%dyears", years);
    return 0;
}