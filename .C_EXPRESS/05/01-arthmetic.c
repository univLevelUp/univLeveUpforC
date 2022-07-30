#include <stdio.h>

int main(void)
{
    int a, b, result;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    result = a + b;
    printf("%d + %d = %d\n", a, b, result);

    result = a - b; 
    printf("%d - %d = %d\n", a, b, result);

    result = a * b;
    printf("%d * %d = %d\n", a, b, result);

    result = a / b;
    printf("%d / %d = %d\n", a, b, result);

    result = a % b;
    printf("%d %% %d = %d\n", a, b, result);    
    
    return 0;
}