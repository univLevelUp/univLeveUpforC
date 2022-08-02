#include <stdio.h>
int main(void)
{
    double x, y, sum, diff, mul, shar;

    printf("Enter float: ");
    scanf("%lf %lf", &x, &y);

    sum = x + y;
    diff = x - y;
    mul = x * y;
    shar = x / y;

    printf("%lf %lf %lf %lf", sum, diff, mul, shar);

    return 0;
}