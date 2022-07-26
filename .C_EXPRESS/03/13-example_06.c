//126p 06번, 달의 중력은 약 17%이다. 자신의 몸무게를 입력받아, 달에서의 몸무게를 계산하는 프로그램으로 작성, 실수형으로 계산.
#define _CRT_SECURT_NO_WRNNIG
#include <stdio.h>

int main(void)
{
    double weight_on_earth, weight_on_moon;

    printf("Enter weight (unit: kg): ");
    scanf("%lf", &weight_on_earth);

    weight_on_moon = weight_on_earth * 0.17;

    printf("The weight on the moon is %lf kg.\n", weight_on_moon);   
    
    return 0;
}
