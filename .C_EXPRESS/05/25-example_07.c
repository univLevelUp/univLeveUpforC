#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Enter an integer: ");
    scanf("%d", &x);

    printf("Number of times you want to multiply 2: ");
    scanf("%d", &y);

    printf("a value of 10<<3: %d", x<<y);

    return 0;
}