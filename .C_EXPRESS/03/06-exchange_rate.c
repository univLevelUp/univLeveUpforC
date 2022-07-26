//119p 환율 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double rate, usd;
    int krw;

    printf("Enter the exchange rate: ");
    scanf("%lf", &rate);

    printf("Enter the krw: ");
    scanf("%d", &krw);

    usd = krw / rate; 
    
    printf ("%d won is equivalent to %lf dollars.", krw, usd);
    
    return 0;
}