#include <stdio.h>

int main(void)
{
  int str[] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
  int arrLen = sizeof(str) / sizeof(char);

  for(int i = 0; i < arrLen; i++)
    printf("%c", str[i]);
  printf("\n");
  return 0;
}