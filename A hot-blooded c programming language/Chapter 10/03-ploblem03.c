#include <stdio.h>

int main(void)
{
  int num1, num2, gcd;
  printf("두 개의 정수 입력: ");
  scanf("%d %d", &num1, &num2);

  for(int i = 1; i <= num1 && i < num2; i++)
  {
    if(num1 % i == 0 && num2 % i == 0)
      gcd = i;
  }
  printf("두 수의 최대공약수 = %d", gcd);
  return 0;
}