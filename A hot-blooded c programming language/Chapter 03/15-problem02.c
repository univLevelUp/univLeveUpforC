#include <stdio.h>

int main(void)
{
  int num1, num2, num3, result;

  printf("첫번째 정수: ");
  scanf("%d", &num1); 
  printf("두번째 정수: ");
  scanf("%d", &num2); 
  printf("세번째 정수: ");
  scanf("%d", &num3); 

  result = num1 * num2 + num3;

  printf("%d * %d + %d = %d", num1, num2, num3, result);
  return 0;
}