#include <stdio.h>

int main(void)
{
    float x = 1.23456e-38;
    float y = 1.23456e-40;
    float z = 1.23456e-46;
    double a = 1.23456e-46;

    printf("x = %e\n", x);
    printf("x = %e\n", y);
    printf("x = %e\n", z);
    printf("x = %e\n", a);
}