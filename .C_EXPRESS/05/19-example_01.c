#include <stdio.h>
int main(void)
{
    int x, y, share, rest;
    
    printf ("Enter 2 integers: ");
    scanf("%d %d", &x, &y);

    share = x / y;
    rest = x % y;
    
    printf("shar:%d rest: %d", share, rest);
    
    return 0;
}