#include <stdio.h>

int main(void)
{
    int a, b, c;
    
    printf("Enter the three sides of the triangle:");
    scanf("%d%d%d", &a, &b, &c);

    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("It's a valid triangle: \n");
    }
    else 
        printf("error\n");

    return 0;
}