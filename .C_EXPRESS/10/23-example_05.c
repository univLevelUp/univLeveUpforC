#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
int main(void)
{
    int i, max;
    int r[SIZE] = {0};
    srand((unsigned)time(NULL));
    
    for (i = 0; i < SIZE; i++)
    {
        r[i] = rand() % 10;
        printf("%d ", r[i]);
    }
    printf("\n");

    max = 0;
    
    for(i = 1; i < 10; i++)
    {
        if(r[i] > max)
            max = i;
    }
    printf("The most frequently asked number = %d", max);
    return 0;
}