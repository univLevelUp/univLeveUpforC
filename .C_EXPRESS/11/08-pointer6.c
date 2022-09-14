#include <stdio.h>

int main(void)
{
    int *p = 10000; //절대 주소는 특수한 경우에만 사용 (ex 엠비디드 , 아두이노 시스템)

    *p = 123; // 포인터 p에 123이 저장됨
    return 0;
}