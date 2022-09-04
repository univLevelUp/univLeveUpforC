#include <stdio.h>

int sum_n(int n);

int main(void)
{
    int n;
    printf("int: ");
    scanf("%d", &n);
    printf("1 ~ %d sum = %d", n, sum_n(n));
    return 0;
}

int sum_n(int n)
{
    if (n == 0)
        return 0;
    else 
        return n + sum_n( n - 1);
}
