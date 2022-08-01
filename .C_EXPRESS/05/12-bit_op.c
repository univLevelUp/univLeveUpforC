#include <stdio.h>

int main(void)
{
    printf("AND : %08X\n", 0x9 & 0xA); // AND 연산자는 모두 1인 경우만 1 반환
    printf("OR : %08X\n", 0x9 | 0xA); // OR 연산자는 하나라도 1인경우 1을 반환 
    printf("XOR : %08X\n", 0x9 ^ 0xA); // XOR 연산자는 연산자가 같으면 0 다르면 1을 반환
    printf("NOT : %08X\n", ~0x9); //NOT 연산자는 피연산자가 0이면 1, 1이면 0으로 반환 
    printf("<< : %08X\n", 0x4 << 1); // shfit 연산자, x의 비트를 y 칸만큼 왼쪽으로 이동
    printf(">> : %08X\n", 0x4 >> 1); // 오른쪽으로 이동 
    
    return 0;
}