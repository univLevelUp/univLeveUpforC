#include <stdio.h>
#include <math.h>
#define PI 3.141592
double sin_degree(double degree)
{
    return sin((PI * degree) / 180.0);
}
int main (void)
{
    for (double degree = 0; degree <= 180; degree += 10)
        printf("sin %f = %f\n", degree, sin_degree(degree));
    return 0;
}

