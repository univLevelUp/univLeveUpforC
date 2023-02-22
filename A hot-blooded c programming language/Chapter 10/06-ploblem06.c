#include <stdio.h>

int main(void)
{
  int sec, min, hour, input;

  printf("ÃÊ(second) ÀÔ·Â: ");
  scanf("%d", &input);
  
  min = input / 60;
  hour = min / 60;
  min = min % 60;
  sec = input % 60;
  
  printf("h:%d, m:%d, s:%d", hour, min, sec);
}