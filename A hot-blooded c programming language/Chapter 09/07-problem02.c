#include <stdio.h>
double CelToFah(double cel);
double FahToCel(double fah);

int main(void)
{
  double fah, cel;
  printf("�����µ��� �Է��ϼ���: ");
  scanf("%lf", &cel);
  printf("ȭ���µ��� %lf�Դϴ�.\n", CelToFah(cel));

  printf("ȭ���µ��� �Է��ϼ���: ");
  scanf("%lf", &fah);
  printf("�����µ��� %lf�Դϴ�.\n", FahToCel(fah));

  return 0;
}

double CelToFah(double cel)
{
  return 1.8 * cel + 32;
}

double FahToCel(double fah)
{
  return (fah - 32) / 1.8;
}
