#include <stdio.h>

int main(void)
{
  int num1, num2, num3, result;

  printf("ù��° ����: ");
  scanf("%d", &num1); 
  printf("�ι�° ����: ");
  scanf("%d", &num2); 
  printf("����° ����: ");
  scanf("%d", &num3); 

  result = num1 * num2 + num3;

  printf("%d * %d + %d = %d", num1, num2, num3, result);
  return 0;
}