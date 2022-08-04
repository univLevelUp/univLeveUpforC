#include <stdio.h>

int main(void)
{
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    if(a>0)
        printf("+\n");

    printf("The entered value is %d.\n", a);
    return 0;
}