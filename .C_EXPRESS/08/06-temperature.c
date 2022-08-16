#include <stdio.h>

void print0ptions()
{
    printf("'c'  c -> f\n");
    printf("'f'  f -> c\n");
    printf("'q'  end\n");
}

double C2F(double c_temp)
{
    return 9.0 / 5.0 * c_temp + 32;
}

double F2C(double f_temp)
{
    return (f_temp - 32.0) * 5.0 / 9.0;
}

int main(void)
{
    char choice;
    double temp;
    while (1)
    {
        print0ptions();
        printf("cohice: ");
        choice = getchar();
        if (choice == 'q') break;
        else if (choice == 'c')
        {
            printf("C temp: ");
            scanf("%lf", &temp);
            printf("f temp: %lf\n", C2F(temp));
        }
        else if (choice == 'f')
        {
            printf("F temp: ");
            scanf("%lf", &temp);
            printf("C temp: %lf\n", F2C(temp));
        }
        getchar();
    }
    return 0;
}