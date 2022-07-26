//120p 사각형 둘레와 면적
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
double w, h, area, perimeter;

printf("Enter the bottom: ");
scanf("%lf", &w);
printf("Enter the height: ");
scanf("%lf", &h);

area = w*h;
perimeter = 2*(w+h);

printf("The area of the rectangle is %lf\nThe perimeter of the rectangle is %lf\n", area, perimeter);

return 0;
}