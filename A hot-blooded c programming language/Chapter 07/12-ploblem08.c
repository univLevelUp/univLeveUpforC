#include <stdio.h>

int main(void)
{
  int total = 0, num = 1;

  
  while(num != 0){
    printf("�����Է�(o to quit): ");
    scanf("%d", &num);
    total += num;
  }
  printf("�հ�: %d \n", total);
  return 0;
}