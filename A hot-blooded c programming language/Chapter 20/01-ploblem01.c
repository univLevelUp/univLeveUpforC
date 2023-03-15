#include <stdio.h>
void print_arr(int (*ptr)[4]);
void change(int (*ptr)[4]);

int main(void)
{
  int arr[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15 ,16}};
  int i, j, k;
  for(i = 0; i < 4; i++)
  {
    print_arr(arr);
    change(arr);
  }
  return 0;
}

void print_arr(int (*ptr)[4])
{
  int i, j;
  for(i = 0; i < 4; i++)
  {
    for(j = 0; j < 4; j++)
      printf("%d ", ptr[i][j]);
    printf("\n");
  }
  printf("\n");
}

void change(int (*ptr)[4])
{
  int arr[4][4];
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
      arr[j][3 - i] = ptr[i][j];
  }
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
      ptr[i][j] = arr[i][j];
  }
}