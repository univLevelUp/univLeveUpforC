#include <stdio.h>
// 아무 배열이나 선언해서 값 할당해보셈
int main(){
  char name[5] = "abcde";
  printf_s("%c, %c, %c, %c, %c\n", name[0], name[1], name[2], name[3], name[4]);
  printf_s("%s\n", name);

  return 0;
}