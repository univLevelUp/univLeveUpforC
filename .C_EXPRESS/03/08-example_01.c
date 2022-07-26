//125p 01번, 세개 실수 받고, 합계와 평균값을 계산하여 출력 
#include <stdio.h>
#define _CRT_SECURE_NO_WRIING

int main(void)
{
    int x, y, z;
    float sum, average;
    
    printf("Please enter an Integers: ");
    scanf("%d", &x);
    printf("Please enter an Integers: ");
    scanf("%d", &y);
    printf("Please enter an Integers: ");
    scanf("%d", &z);
    
    sum = x+y+z;
    average = sum/3.0;
    
    printf("The sum is %f and the average is %f.\n", sum, average);

    return 0;
}