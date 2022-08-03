#include <stdio.h>

int main(void)
{
    int x, y;

    printf("x: ");
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);

    (x>0 && y>0) ? printf("1"): printf("");
    (x<0 && y>0) ? printf("2"): printf("");
    (x<0 && y<0) ? printf("3"): printf("");
    (x>0 && y<0) ? printf("4"): printf("");
    return 0;
}