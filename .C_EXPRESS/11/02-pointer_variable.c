#include <stdio.h>

int main(void)
{
    int i = 10;
    double f = 12.3;
    int *pi = NULL; // int 를 가리키는 포인터 , 지역번수 포인터는 NULL로 초기화
    int *pf = NULL; // doduble 를 가리키는 포인터  

    pi = &i; //포인터 pi, pf에 i와 f를 대입
    pf = &f;
    printf("%u %u\n", pi, &i);
    printf("%u %u\n", pf, &f);
    return 0;
}
