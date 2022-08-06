#include <stdio.h>

int main(void)
{
    int x, y, z, min;
    
    printf("Enter 3 integers: ");
    scanf("%d%d%d", &x, &y, &z);
    
    if (x>y){
        if(y>z)
            min = z;
        else
            min = y;
    }
    else{
        if(x>z)
            min = z;
        else
            min = x;
    }
    printf("The smallest integer is %d.", min);

    return 0;
}