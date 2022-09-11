#include <stdio.h>
#define ROWS 10
#define COLS 3

int main(void)
{
    int input, i;
    int x[COLS][ROWS] = {0};
    
    for (i = 0; i < ROWS; i++)
    {
        x[0][i] = (i + 1);
        x[1][i] = (i + 1) * (i + 1);
        x[2][i] = (i + 1) * (i + 1) * (i + 1);
    }

    printf("int :");
    scanf("%d", &input);

    for(i = 0; i < 10; i++)
    {
        if (x[2][i] == input)
            printf("%d is cube = %d\n", input, x[0][i]);
    }
    return 0;
}