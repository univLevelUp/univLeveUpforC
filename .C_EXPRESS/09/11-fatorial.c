#include <stdio.h>

long factorial(int n)
{
    printf("factorial(%d)\n", n);

    if (n <= 1) 
        return 1;
    else 
        return n * factorial(n-1);
}

int main(void)
{
    int n;
    printf("int: ");
    sacnf("%d", &n);
    printf("%d! = %d \n", n, factorial(n));
    return(0);
}