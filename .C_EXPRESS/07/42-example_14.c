#include <stdio.h>

int main(void)
{
    int n, z;
    
    printf("enter int: ");
    scanf("%d", &n);
    
    do
    {
        z = n % 10;
        n /= 10;
        printf("%d", z);
    } while (n != 0);
    
    return 0;
}