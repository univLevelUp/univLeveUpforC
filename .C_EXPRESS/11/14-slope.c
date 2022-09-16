#include <stdio.h>
// 기울기와 y절편을 계산
int get_line_parameter (int x1, int y1, int x2, int y2, float *slope, float *yintercept);


int main(void)
{
    float s, y;

    if(get_line_parameter(3, 3, 6, 6, &s, &y) == -1)
        printf("error\n");
    else 
        printf("slope = %f, yintercept = %f", s, y);
    return 0;
}


int get_line_parameter (int x1, int y1, int x2, int y2, float *slope, float *yintercept)
{
    if (x1 == y2)
        return -1;
    else
    {
        *slope = (float)(y2 - y1) / (float) (x2 - x1);
        *yintercept = y1 - (*slope)*x1;
        return 0;
    }
}

/* 
계산 함수에서 x1, y1, x2, y2 인수로 받아들임
포인터를 통해 값들을 반환 
*/
