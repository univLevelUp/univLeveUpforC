#include <stdio.h>

int main(void)
{
    int num = 0;
    int i = 1;
    printf("양의 정수: ");
    scanf("%d", &num);

    while(i <= num)
    {
        printf("%d", 3 * i);
        i++;
    }
    return 0;
}