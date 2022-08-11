#include <stdio.h>

int main(void)
{
    for(int x = 1; x<=5; x++)
    {
            for (int y = 0; y<x; y++)
                printf("*");
        
        printf("\n");
    }
    return 0;
}