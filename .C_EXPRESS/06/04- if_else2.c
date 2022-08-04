#include <stdio.h>

int main(void)
{
    int n, d , result;

    printf("Please enter the numerator: ");
    scanf("%d", &n);

    printf("Please enter a denominator: ");
    scanf("%d", &d);

    if( d == 0)
    {
        printf("It cannot be divided by zero.");
    }
    else
    {
        result = n / d;
        printf("The result is %d \n", result);
    }
    
    return 0;
}