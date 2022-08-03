#include <stdio.h>

int main(void)
{
    double h, length, distance, h2;
    
    printf("Enter the height of the cane: ");
    scanf("%lf", &h);
    
    printf("Enter the length of the cane shadow: ");
    scanf("%lf", &length);

    printf("Enter the distance to the pyramid: ");
    scanf("%lf", &distance);

    h2 = h * distance / length;

    printf("The height of the pyramid is %f.", h2);

    return 0;
}