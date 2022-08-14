#include <stdio.h>

int main(void)
{
    int n, result = 0;

    printf("Please enter a value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        result = result + i * i;
    }

    printf("result = %d", result);

    return 0;
}