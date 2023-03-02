#include <stdio.h>

int main(void)
{
  int temp;
  int ary[10];
  int tempary[10];
  int even = 5;
  int odd = 0;
  int i;

  for(i = 0; i < 10; i++)
  {
    printf("정수를 입력하세요: ");
    scanf("%d", &ary[i]);
  }
  
  for(i = 0; i < 10; i++)
  {
    if(ary[i] % 2 == 0)
    {
      temp = ary[i];
      tempary[even] = temp;
      even++;
    }
    else if(ary[i] % 2 == 1)
    {
      temp = ary[i];
      tempary[odd] = temp;
      odd++;
    }
  }

  for(i = 0; i < 10; i++)
    printf("%d ", tempary[i]);
  printf("\n");

  return 0;
}
