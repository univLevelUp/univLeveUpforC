#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 5
#define COLS 3
#define SIZE 10
int main(void)
{
    int i, mini, large, j;
    int scores[ROWS][COLS];
    srand(time(NULL));
    for (i = 0; i < COLS; i++)
    {
        for (j = 0; j < ROWS; j++)
            scores[i][j] = rand() % 101;
    }
    
    mini = scores[0][0];
    large = scores[0][0];

    for(i = 0; i < COLS; i++)
    {
        for(j = 0; j < ROWS; j++){
            if(scores[i][j] < mini)
                mini = scores[i][j];
            if(scores[i][j] > large){
                large = scores[i][j];
            }  
            printf("test %d: max = %d\n", j, large);
            printf("test %d: mini = %d\n", j, mini);          
        }

    }

    return 0;
}