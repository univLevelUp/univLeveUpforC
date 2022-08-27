#include <stdio.h>
#define e 0.000001

double f_abs(double x, double y)
{
    if(x > y)
        return x - y;
    else
        return (x - y) * (-1);
}

double f_min(double x, double y)
{
    if(x < 0)
        x = x * (-1);
    else if(y < 0)
        y = y * (-1);
    
    if(x > y)
        return y;
    else 
        return x;
}

double f_equal(double x, double y)
{
    if(f_equal(x, y) / f_min(x, y) < e)
        printf("equivalence");
    else 
        printf("Different");
}


int main()
{
    double x, y;
    printf("float: ");
    scanf("%lf", &x);
    printf("float: ");
    scanf("%lf", &y);
    f_abs(x, y);
    f_min(x, y);
    f_equal(x, y);
    return 0;
}