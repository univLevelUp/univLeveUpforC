#include <stdio.h>

int main(void)
{
  int num;
  printf("정수 입력: ");
  scnaf("%d", &num);

  if (num < 0)
    printf("입력 값은 0 보다 작다.\n");
  else
    printf("입력 값은 0 보다 작지 않다/\n");
  return 0;
}