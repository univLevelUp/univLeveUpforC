#include <stdio.h>

int main(void)
{
    int n, i=1;
    long fact = 1;
    
    printf("Enter int: ");
    scanf("%d", &n);

    while (i<=n)
    {
        fact = fact * i;
        i++;
    }
    
    printf("%d! = %d\n", n, fact);
    
    return 0;
}