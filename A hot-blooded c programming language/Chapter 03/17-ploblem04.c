#include <stdio.h>

int main(void)
{
  int num1, num2, result, result2;

  printf("정수 one: ");
  scanf("%d", &num1);
  printf("정수 two: ");
  scanf("%d", &num2);

  result = num1 / num2;
  result2 = num1 % num2;

  printf("%d / %d의 몫은 %d \n", num1, num2, result);
  printf("%d / %d의 나머지는 %d \n", num1, num2, result2);
  return 0;
}