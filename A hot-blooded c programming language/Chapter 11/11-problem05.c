#include <stdio.h>

int main(void)
{
  char voca[100];
  int len = 0;
  char max = 0;

  printf("영단어 입력: ");
  scanf("%s", voca);

  while(voca[len] != '\0')
    len++;
  
  for(int i = 0; i < len; i++)
    if(max < voca[i])
      max = voca[i];
  printf("가장 큰 아스키 코드 값으 문자: %c \n", max);
  return 0;
}