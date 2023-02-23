#include <stdio.h>

int main(void)
{
  int arr[5];
  int max, min, sum = 0;
  for(int i = 0; i < 5; i++)
  {
    printf("정수를 입력하세요: ");
    scanf("%d", &arr[i]);
  }

  max = min = sum = arr[0];

  for(int i = 1; i < 5; i++)
  {
    sum += arr[i];
    if(max < arr[i])
      max = arr[i];
    if(min > arr[i])
      min =  arr[i];
  }
  printf("입력된 정수 중에서 최댓값: %d", max);
  printf("입력된 정수 중에서 최솟값: %d", min);
  printf("입력된 정수의 총 합: %d", sum);
  return 0;
}