#include <stdio.h>

int main(void)
{
  int num;

  printf("������ �Է��ϼ���: ");
  scanf("%d", &num);

  num = -num;

  printf("�Է� ���� ������ �ٲ� ��ȣ�� ��: %d", num);
  return 0;
}