#include <stdio.h>
void DesSort(int ary[], int len);

int main(void)
{
  int ary[7];
  int i;

  for (i = 0; i < 7; i++)
  {
    printf("정수를 입력하세요: ");
    scanf("%d", &ary[i]);
  }

  DesSort(ary, sizeof(ary) / sizeof(int));

  for (i = 0; i < 7; i++)
    printf("%d ", ary[i]);
  printf("\n");
}

void DesSort(int ary[], int len)
{
  int i, j;
  int temp;

  for (i = 0; i < len - 1; i++)
  {
    for (j = 0; j < len - 1; j++)
    {
      if (ary[j] < ary[j + 1])
      {
        temp = ary[j];
        ary[j] = ary[j + 1];
        ary[j + 1] = temp;
      }
    }
  }
}