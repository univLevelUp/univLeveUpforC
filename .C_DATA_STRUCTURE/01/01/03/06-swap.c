#include <stdio.h>

void swap(int *px, int *py)
{
    int tmp;
    tmp = *px;
    *px = *py;
    *py = tmp;
}

int main(void)
{
    int a = 1, b = 2;
    printf("Before calling swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After calling swap: a=%d, b=%d\n", a, b);
    
    return 0;
}