// 149p0 부동 소수점 자료형의 크기 계산

#include <stdio.h> 

int main(void)
{
    float x = 1.234567890123456789;
    double y = 1.234567890123456789;

    printf("float is size: %d\n", sizeof(float));
    printf("double is size = %d\n", sizeof(double)); 

    printf("x = %30.25f\n", x);
    printf("y = %30.25f\n", y); // %30.25는 30자리 중 25자리 까지만 출력

    return 0;
}