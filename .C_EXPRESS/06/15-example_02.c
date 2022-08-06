#include <stdio.h>

int main(void)
{
    int x, y;
    
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("Enter an integer: ");
    scanf("%d", &y);

    
    if (x % y == 0)
    {
        printf("It's diviso.\n");
    }
    else 
        printf("It's not diviso.\n");
    
    return 0;
}