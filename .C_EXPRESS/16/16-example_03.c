#include <stdio.h>
#define VOLUME(r, h) (3.141592*r*r*h)

int main(void)
{
	double r, h, volume;

	printf("Enter the radius of the cylinder:");
    scanf("%lf", &r);

	printf("Enter the height of the cylinder:");
    scanf("%lf", &h);

	volume = VOLUME(r, h);
    printf("Volume of the cylinder: %f ", volume);

	return 0;
}