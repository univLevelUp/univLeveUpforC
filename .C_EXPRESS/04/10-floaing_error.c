#include <stdio.h>

int main(void)
{
    double x;

    x = (1.0e20 + 5.0) - 1.0e20; // e20 = 10의-20승 
    printf("%f \n", x);
    
    return 0;
}