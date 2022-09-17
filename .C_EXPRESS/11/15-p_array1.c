//포인터와 뺴열의 꽌께
#include <stdio.h>

int main(void)
{  
    int a[] = {10, 20, 30, 40 , 50};

    printf("&a[0] = %u\n", &a[0]); // 배열 첫번째 요소는 a[0] / 주소는 &a[0] 
    printf("&a[0] = %u\n", &a[1]);
    printf("&a[0] = %u\n", &a[2]);

    printf("a = %u\n", a);
    return 0;
}