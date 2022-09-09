#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void)
{
    int i, mini, large;
    int x[SIZE] = {0};
    srand(time(NULL));

    for(i = 0; i < SIZE; i++){
        x[i] = rand();
        printf("'%d' ", x[i]);
    }
    printf("\n");
    
    mini = x[0];
    large = x[0];
    
    for(i = 1; i < SIZE; i++)
        if(x[i] <= mini)
            mini = x[i];
        else if(x[i] >= large)
            large = x[i];
    
    printf("mini = %d\n", mini);
    printf("large = %d\n", large);

    return 0;
}