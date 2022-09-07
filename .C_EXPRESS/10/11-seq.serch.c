#include <stdio.h>
#define SIZE 10

int main(void)
{
    int key, i;
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Enter a value to explore: ");
    scanf("%d", &key);

    for(i = 0; i < SIZE; i++)
        if (list[i] == key)
            printf("Discovery Success Index = %d\n", i);
        
    printf("End of search");
    return 0;
}