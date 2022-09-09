#include <stdio.h>
#define SIZE 10

void array_copy(int a[], int b[]);
void printf_array(int a[]);

int main(void)
{
    int a[SIZE] = {1, 2, 3};
    int b[SIZE] = {0};
    printf_array(a);
    array_copy(a, b);
    printf(b);
    printf_array(b);

    return 0;
}

void printf_array(int a[])
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void array_copy(int a[], int b[])
{
    for(int i = 0; i < SIZE; i++)
        b[i] = a[i];
}