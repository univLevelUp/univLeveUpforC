#include <stdio.h>

int main(void)
{
    int number, sum = 0;
    
    do
    {
        printf("enter int: ");
        scanf("%d", &number);
        sum += number;
    } while (number != 0);
    
    printf("sum = %d\n", sum);
    return 0;
}