#include <stdio.h>
int main(void)
{
    int c;
    printf("counter: ");
    scanf("%d", &c);
    
    for(c; c>=1; c--)
    {
        printf("%d ", c);
    }

    return 0;
}