// 포인터의 증감 연산
#include <stdio.h>

main(void)
{
    int i = 10; // i = 10 
    int *pi = &i; // 포인터 pi 는 i를 가리킨다

    printf("i = %d, pi = %p\n", i, pi);
    (*pi)++; //pi가 가리키는 대상 증가
    printf("i = %d, pi = %p\n", i, pi);

    printf("i = %d, pi = %p\n", i, pi);
    *pi++; //pi를 증가
    printf("i = %d, pi = %p\n", i, pi);

    return 0;
}