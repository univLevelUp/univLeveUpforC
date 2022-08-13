#include <stdio.h>

int main(void)
{
    for(int i=1;i<=7;i++)
    {
            for(int x=1; x<=7-i; x++)
                printf(" ");
            for (int x=1; x<=i; x++)
                printf("*");
        printf("\n");
    }
    return 0;
}