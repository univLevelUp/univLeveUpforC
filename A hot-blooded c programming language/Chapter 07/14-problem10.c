#include <stdio.h>

int main(void)
{
  int i = 0, sum = 0;

  do
  {
    sum += i;
    i = i + 2;
  }while(i <= 100);
  printf("�հ� : %d", sum);
  return 0;
}