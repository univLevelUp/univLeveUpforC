#include <stdio.h>

int main(void)
{
  int i, sum;

  i = 1;
  sum = 0;

  while (i != 0)
  {
    printf("정수를 입력하세요: ");
    scanf("%d", &i);
    sum = sum + i;
  }
  printf("sum = %d", sum);
  return 0;
}