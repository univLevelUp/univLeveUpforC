#include <stdio.h>

int main(void)
{
    int i;
    char fruits[3][20];

    for (i = 0; i < 3; i++)
    {
        printf("fruits name: ", fruits[i]);
        scanf("%s", fruits[i]);
    }
    for (i = 0; i < 3; i++)
        printf("%d is fruits %s\n", i, fruits[i]);
    return 0;
}