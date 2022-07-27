//130p, 3.141592 =상수 -> 리미털 상수
#define _CRT_SECURT_NO_WRNNIG
#include <stdio.h> 

int main(void)
{
    double r, area;
    
    printf("Enter the radius of the circle.: ");
    scanf("%lf", &r);

    area = 3.141592 * r * r;
    printf("The area of the circle is : %f\n", area);

    return 0;
}