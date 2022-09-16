// call - by value (값에 의한 호출) : 복사본이 전달된다
#include <stdio.h>

void swap(int x, int y);

int main(void)
{
    int a = 100, b= 200;

    printf("a = %d b = %d\n", a, b);
    swap(a, b);
    printf("a = %d b = %d\n", a, b);
    return 0;
}
void swap(int x, int y)
{
    int tmp;

    printf("x = %d y = %d\n", x, y);

    tmp = x;
    x = y;
    y = tmp; // tmp 를 이용해서 x, y 값을 교환한다.
    printf("x = %d y = %d\n", x, y); 
}

/* 결과값
a = 100 b = 200
x = 100 y = 200
x = 200 y = 100
a = 100 b = 200
swap() 안에서는 값 교환 but main () 에서는 교환 x 
c에서는 함수 호출이 기본적으로 call by value기 때문
함수의 인수로 변수의 값만 전달때기 때문임.
*/
