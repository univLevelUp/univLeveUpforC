#include <stdio.h>

int main(void)
{
    int a[] = {10, 20, 30, 40, 50};
    int *p;

    p = a;

    printf("a[0] = %d a[1] = %d \n", a[0], a[1], a[2]);
    printf("p[0] = %d, p[1] = %d p[2]=%d\n\n", p[0], p[1], p[2]);

    a[0] = 60;
    a[1] = 70;
    a[2] = 80;

    printf("a[0] = %d a[1] = %d \n", a[0], a[1], a[2]);
    printf("p[0] = %d, p[1] = %d p[2]=%d\n\n", p[0], p[1], p[2]);

    return 0;
}