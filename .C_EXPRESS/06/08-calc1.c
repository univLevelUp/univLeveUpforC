#include <stdio.h>

int main(void)
{
    char op;
    int x, y, result;

    printf("Enter formula (Example 2 + 5): \n");
    printf(">>");
    scanf("%d %c %d", &x, &op, &y);

    if(op == '+')
        result = x + y;
    else if(op == '-')
        result = x - y;
    else if(op == '*')
        result = x * y;
    else if(op == '/')
        result = x / y;
    else if(op == '%')
        result = x % y;
    else 
        printf("Unsupported calculation.");

    printf("%d %c %d = %d \n", x, op, y, result); 
    
    return 0;
}