#include <stdio.h>

void menu(void);
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

void menu(void)
{
    printf("=============\n");
    printf("0. add\n");
    printf("1. sub\n");
    printf("2. mul\n");
    printf("3. div\n");
    printf("4. end\n");
    printf("=============\n");
}

int main(void)
{
    int choice, result, x, y;
    int (*pf[4])(int, int) = {add, sub, mul, div};

    while(1)
    {
        menu();
        printf("choice menu:");
        scanf("%d", &choice);

        if(choice < 0 || choice >= 4)
            break;
        
        printf("two int: ");
        scanf("%d %d", &x, &y);

        result = pf[choice](x, y);
        
        printf("result = %d\n", result);
    }

    return 0;
}

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}