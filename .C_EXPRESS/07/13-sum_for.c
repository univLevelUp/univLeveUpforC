#include <stdio.h>

int main(void)
{
    int sum;

    sum = 0;
    for(int i =1; i <=10; i++)
        sum += i;
        
        printf("1~10 sum = %d\n", sum);

    return 0;
}