#include <stdio.h>

int main(void)
{
  int n, i;
  int num = 2;

  printf("��� n �Է�: ");
  scanf("%d", &n);

  for(i = 0; num <= n; i++)
    num *= 2;
  printf("������ �����ϴ� k�� �ִ��� %d", i);
  return 0;
}