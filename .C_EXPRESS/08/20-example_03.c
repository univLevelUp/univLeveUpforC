#include <stdio.h>
#define pi 3.141592

double cal_area(double radius)
{
    return pi * radius * radius;
}

int main(void)
{
    double r, area;
    printf("cal r?: ");
    scanf("%lf", &r);
    printf("cal_area: %lf", cal_area(r));
    
    return 0;
}
