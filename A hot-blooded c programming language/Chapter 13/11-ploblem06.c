#include <stdio.h>

int main(void)
{
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int *arr_1 = &arr[0];
  int *arr_2 = &arr[5];
  int temp;
  for(int i = 0; i < 3; i++)
  {
    temp = *arr_1; 
    *arr_1 = *arr_2;
    *arr_2 = temp;
    arr_1 += 1;
    arr_2 -= 1; 
  }
  for(int i = 0; i < 6; i++)
    printf("%d ", arr[i]);
  return 0;
}