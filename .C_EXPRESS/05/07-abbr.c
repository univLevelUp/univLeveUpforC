#include <stdio.h>

int main(void)
{
    int x = 10, y = 10, z = 33; 

    x += 1; // x= x+1
    y *= 2; // y= y*2 
    z %= 10 + 20; // z= z% (10+20)

    printf("x = %d y = %d c = %d \n", x, y, z);
    return 0;
}