#include <stdio.h>

int main(void)
{
    double x, fx;

    printf("Please enter a value of x: ");
    scanf("%lf", &x);

    if(x <= 0)
    {
        fx = (x * x) - (9 * x) + 2;
        printf("The value of fx is %f\n", fx); 
    }
    else
    {
        fx = (7 * x) + 2;
        printf("The value of fx is %f\n", fx);
    }
    return 0;
}