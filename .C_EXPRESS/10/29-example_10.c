#include <stdio.h>
#include <math.h>
double vector_add(double x[], double y[], double z[]);
double vector_dot(double x[], double y[]);
int main(void)
{
    double x[3] = {1, 2, 3};
    double y[3] = {1, 2, 3};
    double z[3] = {0};
    vector_add(x, y, z);
    vector_dot(x, y);
    return 0;
}
double vector_add(double x[], double y[], double z[])
{
    int i;
    for(i = 0; i < 3; i++)
    {
        z[i] += x[i] + y[i];
        printf("sum of vectors: %lf", z[i]);
        printf("\n");
    }
}
double vector_dot(double x[], double y[])
{
    double s = 0;
    for (int i = 0 ; i < 3; i++)
    {
        s += x[i] * y[i];
    }
    printf("dot product: %lf", s);
}