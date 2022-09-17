#include <stdio.h>

int main(void)
{
    int a[] = {10, 20, 30, 40, 50};

    printf("a = %u\n", a); // 배열 이름을 포인터 처럼 사용할 수 있음

    printf("a + 1 = %u\n"); // a + 1 = a 보다 4가 크다 (a1과 주소가 같음)

    printf("*a = %d\n", *a); // *a 를 출력하면 a(0)과 같음

    printf("*(a+1) = %d\n", *(a+1)); // *(a+1) 은 a(1)과 같다 

    return 0;
}