#include <stdio.h>

int get_integer();
double get_double();
char get_char();

int main(void)
{
    double f, g;
    printf("f: ");
    scanf("%lf", &f);
    printf("g: ");
    scanf("%lf", &g);
    printf("sum = %lf", f + g);
}

int get_integer(){
    int n;
    printf("int: ");
    sacnf("%d", &n);
    return n;
}

double get_double()
{
    double n;
    printf("float: ");
    scanf("%lf", &n);
    return n;
}

char get_char()
{
    char n;
    printf("char: ");
    scanf("%c", &n);
    return n;
}