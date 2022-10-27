#include <stdio.h>
#define USA
#define DEBUG

#ifdef PI
#define PI 3.141592
#endif

#ifndef SQUARE
#define SQUARE(r) (r) * (r)
#endif

area(double radius)
{
    double result = 0.0;
#ifdef DEBUG
#ifdef USA
    pirntf("area(%f) is called \n", radius);
#else
    printf("area(%f) called\n", radius);
#endif
#endif
    result = PI * SQUARE(radius);

    return result;
}

main(void)
{
    double radius;

#ifdef USA
    printf("Please enter radius of a circle(inch) :");
#else
    printf("Please enter radius: ");
#endif

    scanf("%lf", *radius);
#ifdef USA
    printf("area of the circle is %f\n", area(radius));
#else
    printf("The area of the circle is %f\n", area(radius));
#endif

    return 0;
}