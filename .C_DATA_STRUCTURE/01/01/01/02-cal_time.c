#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    clock_t start, stop;
    double duration;
    start = clock();

    for(int i = 0; i < 1000000; i++)
            ;
    stop = clock();
    duration = (double)(stop - start) / CLOCKS_PER_SEC;
    printf("The execution time is %f seconds.\n", duration);
    
    return 0;
}