#include <stdio.h>

int main(void)
{
  int lx, ly, rx, ry, area;

  printf("�� ����� x, y ��ǥ: ");
  scanf("%d %d", &lx, &ly);

  printf("�� �ϴ��� x, y ��ǥ: ");
  scanf("%d %d", &rx, &ry);

  area = (rx - lx) * (ry - ly);

  printf("�� ���� �̷�� ���簢���� ���̴� %d �Դϴ�.", area);
  return 0;
}