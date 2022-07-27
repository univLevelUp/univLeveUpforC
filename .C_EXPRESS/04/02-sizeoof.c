//133p 자료형의 크기 
#include <stdio.h>

int main(void)
{
    int x;
    printf("x is size: %d,\n", sizeof(x)); //변수 x의 크기
    
    printf("char is size: %d\n", sizeof(char)); //문자형
    printf("int is size: %d\n", sizeof(int)); //정수형
    printf("short is size: %d\n", sizeof(short)); //정수형
    printf("long is size: %d\n", sizeof(long)); // 실수형 
    printf("long long is size: %d\n", sizeof(long long)); //실수형 
    printf("float is size: %d\n", sizeof(float)); //실수형
    printf("double is size: %d\n", sizeof(double)); //실수형 

    return 0;
}