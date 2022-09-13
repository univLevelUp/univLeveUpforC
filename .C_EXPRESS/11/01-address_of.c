#include <stdio.h>

int main(void)
{
    int i = 10;
    char c = 69;
    double f = 12.3;

    printf("i adress: %u\n", &i);
    printf("c adress: %u\n", &c);
    printf("f adress: %u\n", &f);

    return 0;    
}