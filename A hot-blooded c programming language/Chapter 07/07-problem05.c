#include <stdio.h>

int main(void)
{
  int i = 0, num = 0, i2 = 0;
  double average = 0;

  printf("몇개의 정수를 입력 할것인가?");
  scanf("%d", &i);

  while (num < i)
  {
    printf("정수: ");
    scanf("%d", &i2);
    average += i2;
    num++;
  }
  printf("평군값: %lf", average);
  return 0;
}