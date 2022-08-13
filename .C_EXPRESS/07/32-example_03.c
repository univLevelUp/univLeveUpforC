#include <stdio.h>

int main(void)
{
    int i, e;

    printf("int: ");
    scanf("%d", &e);
    printf("answer: ");
    for (i=1; i<=e; i++)
    {
        if(e%i==0)
        printf("%d ", i);
    }
    return 0;
}