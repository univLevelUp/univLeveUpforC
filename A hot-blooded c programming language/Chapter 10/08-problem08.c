#include <stdio.h>
int power(int n);

int main(void)
{
  int input;
  printf("정수 입력: ");
  scanf("%d", &input);
  printf("2의 %d승은 %d", input, power(input));
}

int power(int n)
{
  if(n == 0)
    return 1;
  return power(n - 1) * 2;
}