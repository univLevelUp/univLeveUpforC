#include <stdio.h>

int main(void)
{
    int sum, i;

    sum = 0;
    i = 0;

    while(1)
    {
        sum = sum + i;
        if(sum > 10000)
            break;
        i++;    
    }
    printf("1~%d = %d\n",i-1, sum-i);
    return 0;
}