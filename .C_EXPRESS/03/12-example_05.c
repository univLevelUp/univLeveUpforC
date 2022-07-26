//126p 05번, 다항식 (3*x*x)+(7*x)+(11)의 값을 계산하는 프로그램, x 의 값은 실수로 사용자에게 입력 받는다.
#define _CRT_SECURT_NO_WRNNIG
#include <stdio.h> 

int main(void)
{
    double x, polynomial;
    
    printf("Please enter an Integers: ");
    scanf("%lf", &x);

    polynomial = (3 * x * x) + (7 * x) + 11; 

    printf("The value of the polynomial is %lf\n", polynomial);
    
    return 0;
}