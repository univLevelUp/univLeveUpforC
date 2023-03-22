#include <stdio.h>

int main(void)
{
  int lx, ly, rx, ry, area;

  printf("좌 상단의 x, y 좌표: ");
  scanf("%d %d", &lx, &ly);

  printf("우 하단의 x, y 좌표: ");
  scanf("%d %d", &rx, &ry);

  area = (rx - lx) * (ry - ly);

  printf("두 점이 이루는 직사각형의 넓이는 %d 입니다.", area);
  return 0;
}