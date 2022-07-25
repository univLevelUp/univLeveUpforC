//117p, 연봉계산기 프로그램 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int yeslary, msalary; 
    
    printf("Enter your annual salary (unit 10,000won): ");
    scanf("%d", &yeslary);
    
    msalary=yeslary/12;
    printf("Monthly Receiving Amount (Unit: 10,000 won): %d\n", msalary);
    
    return 0;
}