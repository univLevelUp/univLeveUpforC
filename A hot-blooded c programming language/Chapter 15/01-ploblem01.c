#include <stdio.h>
void odd_print(int n[]);
void even_print(int n[]);

int main(void)
{
  int arr[10];
  
  for(int i = 0; i < 10; i++)
  {
    printf("정수를 입력하세요: ");
    scanf("%d", &arr[i]);
  }
  odd_print(arr);
  even_print(arr);

  return 0;
}

void odd_print(int n[])
{
  int i;
  printf("홀수 출력: ");
  for(i = 0; i < 10; i++)
  {
    if(n[i] % 2 == 1)
      printf("%d ", n[i]);
  }
  printf("\n");
}

void even_print(int n[])
{
  int i;
  printf("짝수 출력: ");
  for(i = 0; i < 10; i++)
  {
    if(n[i] % 2 == 0)
      printf("%d ", n[i]);
  }
  printf("\n");
}