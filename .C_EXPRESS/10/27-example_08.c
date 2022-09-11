#include <stdio.h>
#include <math.h>
#define SIZE 10

double avr(double x[]);
double sd(double x[]);

int main(void)
{
    int i;
    double data[SIZE] = {0};

    for (i = 0; i < SIZE; i++)
    {
        printf("data: ");
        scanf("%lf", &data[i]);
    }
    
    printf("avr: %lf\n", avr(data));
    printf("sd: %lf\n", sd(data));

    return 0;
}

double avr(double x[])
{
    double sum = 0;
    int i;
    for (i = 0; i < SIZE; i++)
    {
        sum += x[i];
    }
    return sum / SIZE;
}

double sd(double x[])
{
    double var = 0;
    int i;

    for (i = 0; i < SIZE; i++)
    {
        var = var + (x[i] - avr(x)) * (x[i] - avr(x));
    }
    var = var / SIZE;
    return sqrt(var);
}