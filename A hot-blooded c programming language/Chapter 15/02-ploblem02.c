#include <stdio.h>
void print_2(int n);

int main(void)
{
  int num;
  printf("10���� ���� �Է�: ");
  scanf("%d", &num);
  print_2(num);
}
void print_2(int n)
{
    int i;
    i = n%2;
    if(n>=2)
      print_2(n/2);
    printf("%d", i);
}