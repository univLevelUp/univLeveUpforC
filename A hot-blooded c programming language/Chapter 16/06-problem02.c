#include <stdio.h>

int main(void)
{
    int arr_A[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int arr_B[4][2];
    int i, j;

    for(i = 0; i < 2; i++)
        for(j = 0; j < 4; j++)
            arr_B[j][i] = arr_A[i][j];

    for(i = 0; i < 4; i++)
        for(j = 0; j < 2; j++)
            printf("%d ", arr_B[i][j]);
    return 0;
}