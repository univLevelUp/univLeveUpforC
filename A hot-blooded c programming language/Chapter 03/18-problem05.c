#include <stdio.h>

int main(void)
{
  int num1, num2, num3, result;

  printf("���� one: ");
  scanf("%d", &num1);
  printf("���� two: ");
  scanf("%d", &num2);
  printf("���� three: ");
  scanf("%d", &num3);

  result = (num1 - num2) * (num2 + num3) * (num3 % num1);

  printf("result = %d", result);
  return 0;
}