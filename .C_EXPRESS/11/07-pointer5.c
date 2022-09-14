#include <stdio.h>

int main(void)
{
    int i;
    double *pd;
    
    pd = &i;
    *pd = 36.6; // 정수형 변수 주소를 대입했으므로 오류 발생.
    return 0;
}