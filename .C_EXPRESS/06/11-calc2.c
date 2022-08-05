#include<stdio.h>

int main(void)
{
    char op;
    int x, y, result;
        
    printf("Enter formula (Example 2 + 5): \n");
    printf(">>");
    scanf("%d %c %d", &x, &op, &y);
    
    switch(op)
    {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            result = x / y;
            break;
        case '%':
            result = x % y;
            break;
        default:
            printf ("error");
            break; 
    }
    printf("%d %c %d = %d \n", x, op, y, result);
    
    return 0;
}