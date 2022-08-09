#include <stdio.h>

int main(void)
{
    int i = 0;

    do
    {
        printf("1---new\n");
        printf("2---open file\n");
        printf("3---close file\n");
        printf("Choose: \n");
        scanf("%d", &i);
    } while (i < 1 || i > 3);

    printf("menu: %d \n", i);
    
    return 0;
}