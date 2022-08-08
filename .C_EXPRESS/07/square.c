#include <stdio.h.>

int main(void)
{
    int n;
    
    printf("=======================");
    printf("%d                 %d^2");
    printf("=======================");

    n = 1;
    while(n <=10)
    {
        printf("%5d %5d\n", n, n*n);
        n++;
    }
    
    return 0;
}