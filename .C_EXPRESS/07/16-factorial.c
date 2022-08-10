#include <stdio.h>

int main(void)
{
    int n;
    long fact = 1;

    printf("enter int: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        fact = fact * i;

    printf("%d! = %d \n", n, fact);

    return 0;
}