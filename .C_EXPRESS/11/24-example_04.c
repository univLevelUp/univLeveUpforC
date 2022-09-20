#include <stdio.h>

void array_print(int *A, int size);

int main(void)
{
    int x[10] = {1, 2, 3, 4, 5};
    array_print(x, 10);
    return 0;
}

void array_print(int *A, int size)
{
    int i;
    printf("A[] = { ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("}\n");
}