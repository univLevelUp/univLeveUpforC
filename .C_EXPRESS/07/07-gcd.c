#include <stdio.h>

int main(void)
{
    int x, y, r;

    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);

    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }

    printf("answer: %d", x);

    return 0;
}