#include <stdio.h>

int main(void)
{
    double divisor, divident, sum;
    int loop_count;

    divisor = 1.0;
    divident = 4.0;
    sum = 0.0;
    printf("try: ");
    scanf("%d", &loop_count);

    while (loop_count > 0)
    {
        sum = sum + divident / divisor;
        divident = -1.0 * divident;
        divisor = divisor + 2;
        loop_count--;
    }
    printf("pi = %f\n", sum);
    return 0;
}