//125p 03번, 삼각형의 높이와 밑변을 받아서 넓이를 계산하여 출력하는 프로그램, 단 모두 실수로 입/출력. 
#include <stdio.h>
#define _CRT_SECURT_NO_WRIING 

int main(void)
{
float b, h, area; 

printf("Bottom of triangle: ");
scanf("%f", &b);
printf("Height of a triangl: ");
scanf("%f", &h);

area = 0.5 * b * h;

printf("Area of a triangl: %f\n", area);

return 0;
}