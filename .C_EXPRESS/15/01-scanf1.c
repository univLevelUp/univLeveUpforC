#include <stdio.h>

int main(void)
{
    int a, b;
    
    printf("Enter an integer consisting of 6 numbers:");
    scanf("%3d%3d", &a, &b);
    printf("Entered integers are %d, %d\n", a, b);

    return 0;
}