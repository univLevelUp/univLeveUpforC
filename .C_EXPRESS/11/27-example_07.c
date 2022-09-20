#include <stdio.h>

int main(void)
{
    int a[10] = {1, 2, 3};
    int b[10] = {2, 3, 4};
    int c[10] = {0};
    int i;
    
    printf("A[] = ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    printf("B[] = ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    
    printf("C[] = ");
    array_add(a, b, c, 10);
}

void array_add(int *A, int *B, int *C, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        C[i] = A[i] + B[i];
        printf("%d ", C[i]);
    }
    printf("\n");
}