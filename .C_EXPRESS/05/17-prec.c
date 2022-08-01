#include <stdio.h>

int main(void)
{
    int x=0, y=0;
    int result;

    result = 2 > 3 || 6 > 7; // 둘다 거짓 0
    printf ("%d\n", result); 
    
    result = 2 || 3 && 3 > 2; // &&먼저 실행, 3>2 참 = 1, 3 && 1 참 = 1, 2 || 1 
    printf ("%d\n", result);

    result = x = y = 1; // y=1, x=1, result=1 순서대로 
    printf ("%d\n", result);

    result = - ++x + y--; // -2 + 1 = 1
    printf ("%d\n", result);

    return 0;
}