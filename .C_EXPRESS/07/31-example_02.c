#include <stdio.h>

int main(void)
{
    int s, sum;
    sum = 0;

    for(int i=1;i<=100;i++){
        if(i%3==0)
            sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}