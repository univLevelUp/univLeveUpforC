#include <stdio.h>

int main(void)
{
  double d1, d2;

  printf("�ΰ��� �Ǽ��� �Է��ϼ���: ");
  scanf("%lf%lf", &d1, &d2);

  printf("%f + %f = %f", d1, d2, d1 + d2);
  printf("%f - %f = %f", d1, d2, d1 - d2);
  printf("%f * %f = %f", d1, d2, d1 * d2);
  printf("%f / %f = %f", d1, d2, d1 / d2);
  return 0;
}