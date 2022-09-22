#include <stdio.h>

int serch(int *A, int size, int search_value);

int main(void)
{
    int wage[10] = {200, 100, 100, 200, 300, 200};
    int value = 200;
    printf("%d is index %d\n0 " 
    , value, serch(wage, 10, value));
    return 0;
}

int serch(int *A, int size, int search_value)
{
    int i;
    int index = 0;
    for (i = 0; i < size; i++)
    {
        if(A[i] == search_value)
            index += 1;
    }
    return index;
}