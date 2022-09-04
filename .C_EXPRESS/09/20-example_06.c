#include <stdio.h>

int power(int base, int power_raised);

int main(void)
{
    int base, power_raised;
    printf("base: ");
    scanf("%d", &base);
    printf("power_raised: ");
    scanf("%d", &power_raised);
    printf("%d^%d = %d", base, power_raised, power(base, power_raised));
    return 0;
}

int power(int base, int power_raised)
{
    if (power_raised != 1)
        return base * power(base, power_raised - 1);
    else 
        return base;
}
