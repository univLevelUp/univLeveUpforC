#include <stdio.h>

char op;
int a, b;
int sum(int a, int b);
int diff(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(void)
{
    while (1)
    {
        printf("Please enter your calculation: ");
        scanf("%d%c%d", &a, &op, &b);
            switch (op)
            {
            case '+':
                sum(a, b);
                break;
            case '-':
                diff(a, b);
                break;
            case '*':
                mul(a, b);
                break;
            case '/':
                div(a, b);
                break;
            default:
                break;
            }
    }
    
    return 0;
}

int sum(int a, int b)
{
    static int count = 1;
    printf("count = %d\n", count);
    printf("result = %d\n", a + b);
    count++;
}

int diff(int a, int b)
{
    static int count = 1;
    printf("count = %d\n", count);
    printf("result = %d\n", a - b);
    count++;
}

int mul(int a, int b)
{
    static int count = 1;
    printf("count = %d\n", count);
    printf("result = %d\n", a * b);
    count++;
}

int div(int a, int b)
{
    static int count = 1;
    printf("count = %d\n", count);
    printf("result = %d\n", a / b);
    count++;
}
