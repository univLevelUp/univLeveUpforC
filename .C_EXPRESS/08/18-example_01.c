#include<stdio.h>

double square(double x){
    return x * x;
}
int main(void)
{
    double n;
    printf("int: ");
    scanf("%lf", &n);
    printf("%f is square = %f", n, square(n));
    return 0;
}
