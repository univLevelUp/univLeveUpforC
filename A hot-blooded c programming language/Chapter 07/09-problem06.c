#include <stdio.h>

int main(void)
{
  int i = 0, num = 0, sum = 0;
  
  while(i < 5){
    while(num <= 0)
      {
        printf("������ �Է��ϼ���: ");
        scanf("%d", &num);
      }
      sum += num;
      num = 0;
      i++;
  }
  printf("�հ�: %d", sum);

  return 0;
}