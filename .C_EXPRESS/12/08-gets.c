#include <stdio.h>

int main(void)
{
    char name[100];
    char address[100];

    printf("name: ");
    gets_s(name, 100);
    printf("address: ");
    gets_s(address, 100);
    puts(name);
    puts(address);
    return 0;
}