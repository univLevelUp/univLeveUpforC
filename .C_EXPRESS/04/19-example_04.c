#include <stdio.h>

int main(void)
{
    double w, h, d, volume;
    
    printf("Enter the aspect height of the box at once:");
    scanf("%lf %lf %lf", &w, &h, &d);
    
    volume = w * h * d;

    printf("The volume of the box is %f\n", volume);

    return 0;
}