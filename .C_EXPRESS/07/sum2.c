#include <stdio.h>

int main(void)
{
    int n;
    int i=0;
    int sum=0;

    printf("Please enter an integer: ");
    scanf("%d", &n);

    while(i<=n)
    {
        sum += i;
        i = i + 2;    
    }
    printf("The even sum from 1 to %d is %d\n", n, sum);
    
    return 0;
}