#include <stdio.h>

int show_digit(int x);

int main(void)
{
    int input;
    printf("int: ");
    scanf("%d", &input);
    show_digit(input);

    return 0;
}

int show_digit(int x)
{
    if(x != 0)
    {
        show_digit(x / 10);
        printf("%d ", x % 10);
    }
}