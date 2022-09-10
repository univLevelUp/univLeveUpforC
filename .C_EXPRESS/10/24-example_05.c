#include <stdio.h>

#include <stdio.h>
#define ROWS 3
#define COLS 5

int main(void)
{
    int r_sum = 0;
    int c_sum = 0;
    int a[ROWS][COLS] = 
    {
        {12, 56, 32, 16, 98}, {99, 56, 34, 41 , 3}, {65, 3, 87, 78, 21}
    };

    int i;

    for (i = 0; i < ROWS; i++)
    {
        r_sum = a[i][0] + a[i][1] + a[i][2] + a[i][3] + a[i][4];
        printf("%d ROWS SUM = %d\n", i, r_sum);
    }
    
    for (i = 0; i < COLS; i++)
    {
        c_sum = a[0][i] + a[1][i] + a[2][i];
        printf("%d COLS SUM = %d\n", i, c_sum);
    }
    return 0;
}