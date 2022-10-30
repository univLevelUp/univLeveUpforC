#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("");
    int *list = (int *)malloc(sizeof(int) * 2);
    int i;
    int *list_new;
    
    list[0] = 10;
    list[1] = 20;

    printf("Need space to store 2 integers\n");
    list_new = (int *)realloc(list, sizeof(int) * 3);
    list_new[2] = 30;

    for(i = 0; i < 3; i++)
        printf("%d ", list_new[i]);
    printf("Expand to store 3 integers\n");
    free(list_new);

    return 0;
}