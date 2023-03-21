#include <stdio.h>
int big_number(int num1, int num2, int num3);
int main(void)
{
  int num1, num2, num3;

  printf("세개의 정수를 입력하세요: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  printf("세개 중 가장 큰 수는 %d입니다.",(big_number(num1, num2, num3)));
  return 0;
}

int big_number(int num1, int num2, int num3)
{
  if(num1 < num2)
    if(num2 < num3)
      return num3;
  if(num1 < num2)
    if(num3 < num2)
      return num2;
  else
    return num1;
}