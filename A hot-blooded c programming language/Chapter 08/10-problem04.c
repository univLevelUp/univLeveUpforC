#include <stdio.h>

int main(void)
{
    int num1, num2, result;
    printf("두개의 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);
    
    result = (num1<num2) ? num2 - num1 : num1 - num2;
    printf("뺄셈 결과: %d \n", result);
    return 0;
}