#include <stdio.h>

int main(void)
{
  int i;
  printf("10����: ");
  scnaf("%d", &i);
  printf("%x", &i);
  
  return 0;
}