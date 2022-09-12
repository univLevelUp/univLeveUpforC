#include <stdio.h>
#define SIZE 10
int main(void)
{
    int i, n;
    int stock[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int number[5] = {1, 2, 3, 4, 5};
    for (i = 0; i <= 5; i++)
    {
        stock[i] = number[i];
    }
    printf("stock number: ");
    scanf("%d", &n);
    printf("stock %d is number %d", n, number[n-1]);
    return 0;
}