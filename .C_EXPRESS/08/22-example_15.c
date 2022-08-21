#include <stdio.h>

double round(double f)
{
    return (int)(f+0.5);
}
int main(void)
{
    double input;
    printf("float: ");
    scanf("%lf", &input);
    printf("rounds float: %f", round(input));
    return 0;
}