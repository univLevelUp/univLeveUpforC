#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;
    int n;

    printf("Enter an integer:");
    scanf("%d", &n);

    while (i<=n)
    {
        sum += i;
        i++;
    }
    printf("The sum from 1 to %d is %d\n", n, sum);

    return 0;
}