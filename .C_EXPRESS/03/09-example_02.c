//125p 02번, 마일을 미터로 환산하는 프로그램, 사용자에게 마일단위로 거리 입력 받아 변수에 저장, 변수에 1.609를 곱하여 미터로 변환, 변환한 값을 출력
#include <stdio.h>
#define _CRT_SECURT_NO_WRIING 

int main(void)
{
    float mile; 
    double meter;
    
    printf("Enter mile: ");
    scanf("%f", &mile);
    
    meter = mile * 1.609;

    printf("%.1f mile is %lf meter.\n", mile, meter);
    
    return 0;
}