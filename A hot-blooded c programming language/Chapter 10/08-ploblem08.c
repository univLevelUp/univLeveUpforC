#include <stdio.h>
int power(int n);

int main(void)
{
  int input;
  printf("���� �Է�: ");
  scanf("%d", &input);
  printf("2�� %d���� %d", input, power(input));
}

int power(int n)
{
  if(n == 0)
    return 1;
  return power(n - 1) * 2;
}