//142p const 와 #define을 활용하여 기호상수 만들기
#include <stdio.h>
#define TAX_RATE 0.2 // =, ; 생략 

int main(void)
{
    const int MONTHS = 12;  //기호상수
    int m_salary, y_salaryl;

    printf("Please enter your monthly salary.: ");
    scanf("%d", &m_salary);
    
    y_salaryl = MONTHS * m_salary; 
    printf("Your annual salary is %d.\n", y_salaryl);
    printf("Your tax is %f.\n", y_salaryl*TAX_RATE);  

    return 0;
}