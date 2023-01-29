#include <stdio.h>

int main(void){
  
  int num1, num2, result, result2;

  printf("첫번째 정수: ");
  scanf("%d", &num1);
  printf("두번째 정수: ");
  scanf("%d", &num2);

  result = num1 - num2;
  result2 = num1 * num2;

  printf("두 정수의 뺄셈: %d\n", result);
  printf("두 정수의 곱: %d", result2);
  return 0;
}