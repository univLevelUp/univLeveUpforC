//125p 04번, 사용자로 부터 섭씨 온도를 받아서, 섭씨온도로 환산하여 출력 하는 프로그램 (온도는 실수형으로 처리)
#define _CRT_SECURT_NO_WRIING
#include <stdio.h>

int main(void)
{
    double ft, ct;

    printf("Enter the Celsius temperature: ");
    scanf("%lf", &ft);
    
    ct = (5.0 / 9.0) * (ft - 32.0);

    printf("It's %lf degrees Celsius.\n", ct);

    return 0;
}