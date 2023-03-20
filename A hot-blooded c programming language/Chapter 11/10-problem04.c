#include <stdio.h>

int main(void)
{
  char voca[100];
  int len = 0;
  char in_reverse;

  printf("영단어 입력: ");
  scanf("%s", voca);

  while(voca[len] != '\0')
    len++;
  
  for(int i = 0; i < len / 2; i++)
  {
    in_reverse = voca[i];
    voca[i] = voca[(len - i) - 1];
    voca[(len - i)-1] = in_reverse;
  }
  printf("뒤집힌 영단어: %s \n", voca);
  return 0;
}