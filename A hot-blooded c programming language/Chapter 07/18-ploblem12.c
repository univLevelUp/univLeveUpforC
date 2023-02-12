#include <stdio.h>

int main(void)
{
    int num1, num2, sum;
    printf("두개의 정수를 입력: ");
    scnaf("%d %d", num1, num2);
    
    for(sum = 0; num1 <= num2; num1++)
        sum += num1;
    printf("합계: %d", sum);
    return 0;
}