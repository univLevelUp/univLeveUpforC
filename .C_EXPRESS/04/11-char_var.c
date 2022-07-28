//156p, 문자 변수와 문자 상수
#include <stdio.h> 

int main(void)
{
    char code1 = 'A'; 
    char code2 = 65; //아스키 코드 값
    char beep = 7;
    char beep2 = '\a';

    printf("code1 = %c\n", code1);
    printf("code2 = %c\n", code2);
    printf("%c", beep); 
    printf("%c", 7);
    printf("%c", beep2);
    printf("\"abcdefg\" hijk\n"); // "" 출력
    printf("\\ancdef"); // \출력 
    return 0;
}