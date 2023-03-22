#include <stdio.h>

int main(void)
{
  int num1, num2, result;
  printf("두개의 정수를 입력하세요: ");
  scanf("%d %d", &num1, &num2);

  if (num1 < num2)
    printf("%d ", num2 - num1);
  else if (num2 < num1)
    printf("%d ", num1 - num2);
  return 0;
}