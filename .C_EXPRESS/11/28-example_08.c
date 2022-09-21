#include <stdio.h>

int array_sum(int *A, int size);

int main(void)
{
    int wage[10] = { 1, 2, 3};
    int i;
    printf("wage[] = ");
    for(i = 0; i < 10; i++)
        {
            printf("%d ", wage[i]);
        }

    printf("\n");
    printf("array sum = %d", array_sum(wage, 10));
    return 0;
}

int array_sum(int *A, int size)
{
    int i, sum = 0;
    for(i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}