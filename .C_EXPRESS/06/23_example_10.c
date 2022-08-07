#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Coordinates (x,y): ");
    scanf("%d%d", &x, &y);
    
    if (x > 0 && y > 0)
        printf("the first quadrant\n");
    else if (x < 0 && y > 0)
        printf("the second quadrant\n");
    else if (x < 0 && y < 0)
        printf("the third quadrant\n");
    else if (x > 0 && y < 0)
        printf("the fourth quadrant\n");
    
    return 0;
}