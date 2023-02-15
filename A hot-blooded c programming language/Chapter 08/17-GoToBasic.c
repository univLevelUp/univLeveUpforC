#include <stdio.h>

int main(void)
{
  int num;
  printf("자연수 입력: ");
  scanf("%d", &num);

  if (num == 1)
    goto ONE;
  else if (num == 2)
    goto TWO;
  else
    goto OTHER;

ONE:
  printf("1을 입력했습니다!");
  goto END;

TWO:
  printf("2를 입력했습니다!");
  goto END;

OTHER:
  printf("3혹은 다른값을 입력했습니다.");

END:
  return 0;
}