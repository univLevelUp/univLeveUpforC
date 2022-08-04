#include <stdio.h>

int main(void)
{
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    if(a % 2 == 0)
        printf("It's even.\n");
    else
        printf("Odd number.\n");

    return 0;
}