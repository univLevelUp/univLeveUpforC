#include <stdio.h>

int main(void)
{
    double m, v, E; 
    
    printf("m(kg): ");
    scanf("%lf", &m);
    printf("v(m/s): ");
    scanf("%lf", &v);
    
    E = (m * v * v) / 2.0;

    printf("E(J): %lf", E);    
    return 0;
}