#include <stdio.h>

void showArr2Dstyle(int (*arr)[4], int column)
{
    int i, j;
    for(i = 0; i < column; i++)
    {
        for(j = 0; j < 4; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

int Sum2DArr(int arr[][4], int column)
{
    int i, j, sum = 0;
    for(i = 0; i < column; i++)
        for(j = 0; j < 4; j++)
            sum += arr[i][j];
    return sum;
}

int main(void)
{
    int arr1[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[3][4] = {1, 1, 1, 1, 3, 3, 3, 3, 5, 5, 5, 5};

    showArr2Dstyle(arr1, sizeof(arr1) / sizeof(arr1[0]));
    showArr2Dstyle(arr2, sizeof(arr2) / sizeof(arr2[0]));
    printf("arr1의 합: %d \n", Sum2DArr(arr1, sizeof(arr1)/szieof(arr1[0])));
    printf("arr2의 합: %d \n", Sum2DArr(arr2, sizeof(arr2)/szieof(arr2[0])));
    return 0;
}