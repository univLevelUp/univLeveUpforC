#include <stdio.h>

int main(void)
{
  int n, i;
  int num = 2;

  printf("상수 n 입력: ");
  scanf("%d", &n);

  for(i = 0; num <= n; i++)
    num *= 2;
  printf("공식을 만족하는 k의 최댓값은 %d", i);
  return 0;
}