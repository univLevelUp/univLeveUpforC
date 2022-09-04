#include <stdio.h>

double recursive(double n);

int main(void)
{
    printf("%lf", recursive(10));
    return 0;
}

double recursive(double n)
{
    if (n >= 1)
        return 1.0 / n + recursive(n - 1);
    else
        return 0;
}