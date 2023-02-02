#include <stdio.h>

int main(void)
{
  double d1, d2;

  printf("두개의 실수를 입렵하세요: ");
  scanf("%lf%lf", &d1, &d2);

  printf("%f + %f = %f", d1, d2, d1 + d2);
  printf("%f - %f = %f", d1, d2, d1 - d2);
  printf("%f * %f = %f", d1, d2, d1 * d2);
  printf("%f / %f = %f", d1, d2, d1 / d2);
  return 0;
}