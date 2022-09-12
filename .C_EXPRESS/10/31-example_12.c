#include <stdio.h>

int scalar_mult(int a[][3], int scalar);
int main(void)
{
    int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{0}};
    int scalar = 2;
    scalar_mult(a, scalar);
    printf("\n");
    transpose(a, b);
    return 0;
}
int scalar_mult(int a[][3], int scalar)
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j <3; j++)
        {
            printf("%d ", a[i][j] * scalar);
        }
        printf("\n");
}
}
int transpose(int a[][3], int b[][3])
{
    int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			b[i][j] = a[j][i];
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}	
}
