#include <stdio.h>

int main(void)
{
    const double p = 3.141592; 
    double r, area, volume;

    printf("r: ");
    scanf("%lf", &r);

    area = 4 * p * r * r;

    printf("area: %f\n", area);
    
    volume = (4.0 / 3.0) * p * r * r * r;

    printf("volume: %f\n", volume);
    

}