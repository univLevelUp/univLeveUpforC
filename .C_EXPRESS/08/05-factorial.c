#include <stdio.h>

int fact(int n)
{
    long result = 1;

    for (int i = 1; i<= n; i++)
        result *= i;

    return result;
}

int main(void)
{
    int n;
    printf("n ?");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fact(n));
    return 0;
}