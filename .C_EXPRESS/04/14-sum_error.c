#include <stdio.h>

int main(void)
{
    int x, y, z, sum;
    printf("Enter 3 integers (x, y, z): ");
    scanf("%d %d %d", &x, &y, &z);
    sum = 0;
    sum += x;
    sum += y;
    sum += z;
    
    printf ("3 intergers sum = %d", sum);
    return 0;

}