#include <stdio.h>

int main(void)
{
  int num1, result;

  printf("정수를 입력하세요: ");
  scanf("%d", &num1);

  result = num1 * num1;

  printf("%d의 제곱은 %d입니다.", num1, result);
  return 0;
}