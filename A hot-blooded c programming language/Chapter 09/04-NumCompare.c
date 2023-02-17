#include <stdio.h>
int NumverCompare(int num1, int num2);

int main(void)
{
  printf("3과 4중에 큰 수는 %d 이다. \n", NumverCompare(3, 4));
  printf("7과 2중에 큰 수는 %d 이다. \n", NumverCompare(7, 2));
  return 0;
}

int NumverCompare(int num1, int num2)
{
  if (num1 > num2)
    return num1;
  else
    return num2;
}