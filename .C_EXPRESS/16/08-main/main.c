#include <stdio.h>
#include "power.h"

int main(void)
{
    int x, y;

    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("%d squared value of %d is %f\n", power(x, y));

    return 0;
}