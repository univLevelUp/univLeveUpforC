#include <stdio.h>

int main(void)
{
  int i, sum;

  i = 1;
  sum = 0;

  while (i != 0)
  {
    printf("������ �Է��ϼ���: ");
    scanf("%d", &i);
    sum = sum + i;
  }
  printf("sum = %d", sum);
  return 0;
}