#include <stdio.h>
double CelToFah(double cel);
double FahToCel(double fah);

int main(void)
{
  double fah, cel;
  printf("섭씨온도를 입력하세요: ");
  scanf("%lf", &cel);
  printf("화씨온도는 %lf입니다.\n", CelToFah(cel));

  printf("화씨온도를 입력하세요: ");
  scanf("%lf", &fah);
  printf("섭씨온도는 %lf입니다.\n", FahToCel(fah));

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
