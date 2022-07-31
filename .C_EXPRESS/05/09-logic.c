#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);

    printf("%d && %d: %d\n", x, y, x && y);
    printf("%d || %d: %d\n", x, y, x||y);
    printf("!%d: %d\n",x, !x);

    return 0;
}