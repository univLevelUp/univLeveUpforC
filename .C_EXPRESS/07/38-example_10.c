#include <stdio.h>

int main(void)
{
    double r, result;
    int n;

    result = 1.0;

    printf("Please enter a value: ");
    scanf("%lf", &r);
    printf("Enter the number of squares: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        result = result * r;
    }
    printf("result: %f\n", result);
    return 0;
}