#include <stdio.h>

int main(void)
{
  int money, cream, crab, coke;
  money = 3500;
  cream = 500;
  crab = 700;
  coke = 400;
  
  for(int i = 1; i < money / cream; i++)
  {
    for(int j = 1; j < money / crab; j++)
    {
      for(int c = 1; c < money / coke; c++)
      {
        if(money == cream * i + crab * j + coke * c)
        {
          printf("크림빵 %d개, ", i);
          printf("새우깡 %d개, ", j);
          printf("콜라 %d개", c);
          printf("\n");
        }
      }
    }
  }
  return 0;
}