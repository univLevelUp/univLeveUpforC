#include <stdio.h>

int main(void)
{
    int number, i, x;

    printf("number?: ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++)
    {
        for(x = 1; x <= i; x++)
        {
            printf("%d ", x);
        }
     printf("\n");
    }
    return 0;  
}