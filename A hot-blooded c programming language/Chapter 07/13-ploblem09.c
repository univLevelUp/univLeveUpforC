#include <stdio.h>

int main(void)
{
  int total = 0, num = 0;

  printf("정수입력(o to quit): ");
  scanf("%d", &num);
  total += num;

  while(num != 0){
    printf("정수입력(o to quit): ");
    scanf("%d", &num);
    total += num;
  }
  printf("합계: %d \n", total);
  return 0;
}