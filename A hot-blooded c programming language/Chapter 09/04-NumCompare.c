#include <stdio.h>
int NumverCompare(int num1, int num2);

int main(void)
{
  printf("3�� 4�߿� ū ���� %d �̴�. \n", NumverCompare(3, 4));
  printf("7�� 2�߿� ū ���� %d �̴�. \n", NumverCompare(7, 2));
  return 0;
}

int NumverCompare(int num1, int num2)
{
  if (num1 > num2)
    return num1;
  else
    return num2;
}