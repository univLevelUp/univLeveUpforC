#include <stdio.h>

int main(void)
{
  char voca[100];
  int len = 0;

  printf("���ܾ� �Է�: ");
  scanf("%s", voca);

  while(voca[len] != '\0')
    len++;
  
  printf("�Է��� ���ܾ��� ���̴� %d \n", len);
  return 0;
}