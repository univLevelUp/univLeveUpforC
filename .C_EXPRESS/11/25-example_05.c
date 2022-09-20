#include <stdio.h>

void covert(double *grades, double *scores, int size);

int main(void)
{
    double g[] = {00.00, 00.50, 01.00, 01.50, 02.00, 02.50, 03.00, 03.50, 04.00, 04.30};
    double s[] = {0};
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%.2lf ", g[i]);
    }
    printf("\n");
    covert(g, s, 10);
    return 0;
}

void covert(double *grades, double *scores, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        scores[i] = 100.0 * (grades[i] / 4.3);
        printf("%.2lf ", scores[i]);
    }
    printf("\n");
}