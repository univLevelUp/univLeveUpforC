#include <stdio.h>

int main(void)
{
  int num1, num2, is;
  is = 0;
  printf("두개의 정수 입력: ");
  scanf("%d %d", &num1, &num2);
  if(num1 < num2){
    for(; num1 <= num2; num1++)
    {
      for(is = 1; is < 10; is++)
          printf("%d x %d = %d \n", num1, is, num1*is);
        printf("\n");
    }
  }
  else
     for(; num2 < num1+1; num2++)
    {
      for(is = 1; is < 10; is++)
          printf("%d x %d = %d \n", num2, is, num2*is);
        printf("\n");
    }   
  return 0;
}