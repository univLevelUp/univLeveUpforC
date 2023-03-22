#include <stdio.h>

int main(void)
{
  int i = 0, num = 0, sum = 0;
  
  while(i < 5){
    while(num <= 0)
      {
        printf("정수를 입력하세요: ");
        scanf("%d", &num);
      }
      sum += num;
      num = 0;
      i++;
  }
  printf("합계: %d", sum);

  return 0;
}