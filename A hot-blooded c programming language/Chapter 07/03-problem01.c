#include <stdio.h>

int main(void)
{
    int num = 0;
    int i = 0;
    printf("양의 정수: ");
    scanf("%d", &num);

     while(i < num)
    {
        printf("Hello world!\n");
        i++;
    }
    return 0;
}