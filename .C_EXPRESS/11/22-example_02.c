#include <stdio.h>

void get_sum_diff(int x, int y, int *p_sum, int *p_diff);

int main(void)
{
    int x, y;
    int s, d;
    
    x = 100;
    y = 200;
    get_sum_diff(x, y, &s, &d);
    printf("sum = %d, diff = %d", s, d);
    return 0;
}

void get_sum_diff(int x, int y, int *p_sum, int *p_diff){
    *p_sum = x + y;
    *p_diff = x - y;
}