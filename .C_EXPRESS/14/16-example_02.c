#include <stdio.h>


int get_sum(int array[], int size);

int main(void)
{
    int m[][1] = {10,10,10};
    int result;
    
    result = get_sum(m[0],1);
    
    printf("%d\n", result); 
    return 0;
}

int get_sum(int array[], int size)
{
    int i = 0;
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}
