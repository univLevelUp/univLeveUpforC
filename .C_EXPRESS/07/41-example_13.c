#include <stdio.h>

int main(void)
{
    int n, r, i, result = 1;
    printf("Value of n:");
    scanf("%d", &n);
    printf("Value of r:");
    scanf("%d", &r);
    
    for (i=n; i>=(n-r+1);i--)
    {
        result = result * i;
    }
    printf("result = %d", result);
    return 0;
}