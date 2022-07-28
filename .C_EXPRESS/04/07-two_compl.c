/* 2의 보수 프로그램 */
#include <stdio.h>

int main(void)
{
    int x = 3;
    int y = -3;
    
    printf("x = %08X\n", x); // %08X 16진수로 출력
    printf("y = %08X\n", y);
    printf("x+y = %08X\n", x+y);
    
return 0;
}