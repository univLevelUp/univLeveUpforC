#include <stdio.h>

int main(void)
{
    int x, y, z;
    
    if(scanf("%d%d%d", &x, &y, &z) == 3)
        printf("sum = %d\n", x+y+z);
    else
        printf("error\n");

    return 0;
}