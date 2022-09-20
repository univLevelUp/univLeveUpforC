#include <stdio.h>

int main(void)
{
    int x[10] = {1, 2, 3};
    int y[10] = {0};
    int i = 0;
    array_copy(x, y, 10);
    
    printf("a[] = {");
    
    for(i = 0; i < 10; i++)
    {
        printf("%d ", x[i]);
    }
    printf("}\n");
    printf("b[] = {"); 
    for(i = 0; i < 10; i++)
    {
        printf("%d ", y[i]);
    }
    printf("}\n");
    return 0;
}

void array_copy(int *A, int *B, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        B[i] = A[i];
    }
}