#include <stdio.h>

int main(void)
{
  int num1, num2, result, result2;

  printf("���� one: ");
  scanf("%d", &num1);
  printf("���� two: ");
  scanf("%d", &num2);

  result = num1 / num2;
  result2 = num1 % num2;

  printf("%d / %d�� ���� %d \n", num1, num2, result);
  printf("%d / %d�� �������� %d \n", num1, num2, result2);
  return 0;
}