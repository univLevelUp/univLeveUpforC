#include <stdio.h>

int main(void)
{
  int i = 0, num = 0, i2 = 0;
  double average = 0;

  printf("��� ������ �Է� �Ұ��ΰ�?");
  scanf("%d", &i);

  while (num < i)
  {
    printf("����: ");
    scanf("%d", &i2);
    average += i2;
    num++;
  }
  printf("�򱺰�: %lf", average);
  return 0;
}