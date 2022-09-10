#include <stdio.h>
#define SIZE 10
int main(void)
{
    int list[3][10] = {0};
    int input;
    int i;

    for(i = 0; i < SIZE; i++)
    {
        list[0][i] = i;
        list[1][i] = i * i;
        list[2][i] = i * i * i;
    }

    printf("int: ");
    scanf("%d", &input);
    for(i = 0; i < SIZE; i++)
    {
        if( input == list[2][i])
            printf("The cube of %d = %d\n", input, i);
    }
    return 0;
}