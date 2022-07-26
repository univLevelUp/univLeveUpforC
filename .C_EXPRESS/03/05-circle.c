//118p, 원의 면적 구하기 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float r;
    float area;
    printf("Enter the radius: ");
    scanf("%f", &r);
    
    area = r*r*3.14;
    printf("Area circle: %f\n", area);

    return 0; 
}