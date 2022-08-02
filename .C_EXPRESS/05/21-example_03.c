#include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("Enter 3 integers.");
    scanf("%d %d %d", &x, &y, &z);

    printf("max: %d", (x > y) ? x : y && (y > z) ? y : z);

    return 0;
}