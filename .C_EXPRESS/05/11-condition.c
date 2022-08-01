#include <stdio.h>

int main(void)
{
    int x, y;

    printf("first = ");
    scanf("%d", &x);
    printf("second = ");
    scanf("%d", &y);

    printf ("a large number: %d\n", (x > y) ? x : y);
    printf ("a small number: %d\n", (x < y) ? x : y);

    return 0;
}