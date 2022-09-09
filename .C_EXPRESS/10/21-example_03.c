#include <stdio.h>
#define SIZE 10

int array_equal(int a[], int b[]);
void printf_array(int a[]);

int main(void)
{
    int a[SIZE] = {1, 2, 3,};
    int b[SIZE] = {0, };
    printf_array(a);
    printf_array(b);
   
    if(array_equal == 1)
        printf("Two arrays are the same");
    else
        printf("Two arrays are different");
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
int array_equal(int a[], int b[])
{
    for (int i = 0; i < SIZE; i++)
        if (a[i] == b[i])
            return 1;
        else
            return 0;
}