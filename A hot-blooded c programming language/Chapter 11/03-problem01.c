#include <stdio.h>

int main(void)
{
  int arr[5];
  int max, min, sum = 0;
  for(int i = 0; i < 5; i++)
  {
    printf("������ �Է��ϼ���: ");
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
  printf("�Էµ� ���� �߿��� �ִ�: %d", max);
  printf("�Էµ� ���� �߿��� �ּڰ�: %d", min);
  printf("�Էµ� ������ �� ��: %d", sum);
  return 0;
}