#include <stdio.h>

#define AND     &&
#define OR      ||
#define NOT     !
#define IS      ==
#define ISNOT   =!

int search(int list[], int n, int key)
{
    int i = 0;

    while(i < n AND list[i] ISNOT key)
        i++
    if(i IS n)
        return -1;
    else
        return 1;
}

int main(void)
{
    int m[] = {1, 2, 3, 4, 5, 6, 7};

    printf("Position of 5 in array = %d\n", search(m, sizeof(m) / sizeof(m[0]), 5));
    return 0;
}