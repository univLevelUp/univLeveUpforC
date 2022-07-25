#include <stdio.h>
int main(){
  char name[5] = "abcde";
  printf_s("%c, %c, %c, %c, %c\n", name[0], name[1], name[2], name[3], name[4]);
  printf_s("%s\n", name);

  return 0;
}