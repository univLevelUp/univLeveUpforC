//168p 3번
#include <stdio.h>

int main(void)
{
    int x = 10, y = 20, temp;
    

    printf("x=%d, y=%d\n",x,y);
    
    temp = x; // temp에 10
    x = y; // x = 20
    y = temp; // y는 10 
    
    
    printf("x=%d, y=%d\n", x, y);

    return 0;
}