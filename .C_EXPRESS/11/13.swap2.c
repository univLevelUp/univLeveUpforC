// call by refrence
#include <stdio.h>
void swap(int *px, int *py);

int main(void)
{ 
    int a = 100, b= 200;

    printf("a = %d b = %d\n", a, b);
    swap(&a, &b); // 함수 호출시 인수가 아닌 변수의 주소를 전달한다.
    printf("a = %d b = %d\n", a, b);
    return 0;
}

void swap(int *px, int *py)
{
    int tmp;

    tmp = *px; // tmp = a; && a의 값은 포인터 px를 통해 얻음 / 포인터 px는 a를 가리킨다 
    *px = *py; // a = b;
    *py = tmp; // b = tmp(19line a의 값) 
}
/*
변수의 복사본이 함수로 전달 X원본이 직접 전달됨.
주소를 전달한다
*/