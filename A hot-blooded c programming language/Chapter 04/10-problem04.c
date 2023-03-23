#include <stdio.h>

int main(void)
{
  int num = 3;
  num = num << 3; // 6 -> 9 -> 12
  num = num >> 2; // 24 -> 12 -> 6
  printf("%d", num);
  return 0;
}
