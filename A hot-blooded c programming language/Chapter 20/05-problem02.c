#include <stdio.h>
#include <time.h>

int main(void)
{
  int dice1, dice2;
  srand((int)time(NULL));
  
  dice1 = (rand() % 6) + 1;
  dice2 = (rand() % 6) + 1;
  printf("�ֻ��� 1�� ��� : %d \n", dice1);
  printf("�ֻ��� 2�� ��� : %d \n", dice2);
}