#include <stdio.h>
#include <stdlib.h>

void array_fill(int *A, int size);

int main(void)
{
    int x[10];
    array_fill(x, 10);
    return 0;
}

void array_fill(int *A, int size)
{
    int i;
    for(i = 0; i < size ; i++)
    {
        A[i] = rand();
        printf("%d ", A[i]);
    }
}