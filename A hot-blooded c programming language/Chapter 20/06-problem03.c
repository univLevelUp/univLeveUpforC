#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int User, Computer;
  int Win = 0, Draw = 0;

  srand(time(NULL));

  while (1)
  {
    printf("바위는 1, 가위는 2, 보는 3: ");
    scanf("%d", &User);
    Computer = rand() % 3 + 1;

    if (Computer == 1)
    {
      if (User == 1)
      {
        printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다! \n");
        Draw++;
      }
      else if (User == 2)
      {
        printf("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다! \n");
        break;
      }
      else
      {
        printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다! \n");
        Win++;
      }
    }

    else if (Computer == 2)
    {
      if (User == 1)
      {
        printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다! \n");
        Win++;
      }
      else if (User == 2)
      {
        printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다! \n");
        Draw++;
      }
      else
      {
        printf("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다! \n");
        break;
      }
    }
    else
    {
      if (User == 1)
      {
        printf("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다! \n");
        break;
      }
      else if (User == 2)
      {
        printf("당신은 가위선택, 컴퓨터는 보 선택, 이겼습니다! \n");
        Win++;
      }
      else
      {
        printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다! \n");
        Draw++;
      }
    }
  }
  printf("\n");
  printf("게임의 결과: %d승, %d무\n", Win, Draw);
  return 0;
}