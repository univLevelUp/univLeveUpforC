#include <stdio.h>

main(void)
{
    int i = 3000;
    int *p = NULL;

    p = &i;

    printf("p = %u\n", p); // p가 가리키는 주소의 데이터
    printf("&i = %u\n\n", &i); // p가 가리키는 주소의 데이터

    printf("i = %d\n", i);
    printf("*p = %d\n", *p);

    return 0;
}