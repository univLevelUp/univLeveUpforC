#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int User, Computer;
  int Win = 0, Draw = 0;

  srand(time(NULL));

  while (1)
  {
    printf("������ 1, ������ 2, ���� 3: ");
    scanf("%d", &User);
    Computer = rand() % 3 + 1;

    if (Computer == 1)
    {
      if (User == 1)
      {
        printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�! \n");
        Draw++;
      }
      else if (User == 2)
      {
        printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�! \n");
        break;
      }
      else
      {
        printf("����� �� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�! \n");
        Win++;
      }
    }

    else if (Computer == 2)
    {
      if (User == 1)
      {
        printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�! \n");
        Win++;
      }
      else if (User == 2)
      {
        printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�! \n");
        Draw++;
      }
      else
      {
        printf("����� �� ����, ��ǻ�ʹ� ���� ����, �����ϴ�! \n");
        break;
      }
    }
    else
    {
      if (User == 1)
      {
        printf("����� ���� ����, ��ǻ�ʹ� �� ����, �����ϴ�! \n");
        break;
      }
      else if (User == 2)
      {
        printf("����� ��������, ��ǻ�ʹ� �� ����, �̰���ϴ�! \n");
        Win++;
      }
      else
      {
        printf("����� �� ����, ��ǻ�ʹ� �� ����, �����ϴ�! \n");
        Draw++;
      }
    }
  }
  printf("\n");
  printf("������ ���: %d��, %d��\n", Win, Draw);
  return 0;
}