#include <stdio.h>
#include <stdlib.h>

int even(int n)
{
    if(n % 2 == 0)
        return 1;
    else 
        return 0;
}
int absolute(int n)
{
    return abs(n);
}
int sign(int n)
{
    if(n > 0)
        return 1;
    else if (n < 0)
        return -1;
    else if (n == 0)
        return 0;
}
int main(void)
{
    int a;
    printf("int: ");
    scanf("%d", &a);
    if(even(a) ==  1)
        printf("EVEN\n");
    else
        printf("ODD\n");
    printf("absolute: %d\n", absolute(a));
    
    if (sign(a) == -1)
        printf("-\n");
    else if (sign(a) == 1)
        printf("+\n");
    else if (sign(a) == 0)
        printf("0\n");
    return 0;
}
    