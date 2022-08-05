#include <stdio.h>
#include <math.h>
int main(void)
{
    double a, b, c, dis;

    printf("coefficient a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
        printf("root of the equation: %f\n", -c / b);
    else
    {
        dis = b * b - 4.0 * a * c;
        if (dis >= 0)
        {
            printf("root of the equation: %f\n", (-b + sprt(dis)) / (2.0 * a));
            printf("root of the equation: %f\n", (-b - sprt(dis)) / (2.0 * a));
        }
        else
            printf("x\n");
    }
    return 0;
}