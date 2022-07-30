#include <stdio.h>

int main(void)
{
    double a, b, result;

    printf("Enter two integers: ");
    scanf("%lf %lf", &a, &b); 
    
    result = a + b;
    printf("%lf + %lf = %lf\n", a, b, result);

    result = a - b; 
    printf("%lf - %lf = %lf\n", a, b, result);

    result = a * b;
    printf("%lf * %lf = %lf\n", a, b, result);

    result = a / b;
    printf("%lf / %lf = %lf\n", a, b, result);

    return 0;
}