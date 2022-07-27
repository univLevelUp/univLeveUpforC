// 137p 오버플로우 : 변수가 나타낼 수 있는 범위를 넘는 숫자를 저장하려고 할 때 발생한다. 
#include <stdio.h>
#include <limits.h> // 정수형의 한계를 알려주는 헤더파일 
int main(void)
{
    short s_money = SHRT_MAX; // 최대값으로 초기화.
    unsigned short u_money = USHRT_MAX; //최대값으로 초기화, unsinged = 양수부분만 출력

    s_money = s_money + 1;
    printf("s_money = %d\n", s_money);

    u_money = u_money + 1;
    printf("u_money = %u\n", u_money);

    return 0;
}