#include <stdio.h>

int main(void)
{
  int num;

  printf("정수를 입력하세요: ");
  scanf("%d", &num);

  num = -num;

  printf("입력 받은 정수의 바뀐 부호의 값: %d", num);
  return 0;
}