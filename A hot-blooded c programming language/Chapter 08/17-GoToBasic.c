#include <stdio.h>

int main(void)
{
  int num;
  printf("�ڿ��� �Է�: ");
  scanf("%d", &num);

  if (num == 1)
    goto ONE;
  else if (num == 2)
    goto TWO;
  else
    goto OTHER;

ONE:
  printf("1�� �Է��߽��ϴ�!");
  goto END;

TWO:
  printf("2�� �Է��߽��ϴ�!");
  goto END;

OTHER:
  printf("3Ȥ�� �ٸ����� �Է��߽��ϴ�.");

END:
  return 0;
}