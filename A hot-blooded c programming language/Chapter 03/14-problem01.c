#include <stdio.h>

int main(void){
  
  int num1, num2, result, result2;

  printf("ù��° ����: ");
  scanf("%d", &num1);
  printf("�ι�° ����: ");
  scanf("%d", &num2);

  result = num1 - num2;
  result2 = num1 * num2;

  printf("�� ������ ����: %d\n", result);
  printf("�� ������ ��: %d", result2);
  return 0;
}