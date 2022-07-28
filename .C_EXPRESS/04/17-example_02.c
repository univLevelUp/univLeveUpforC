//168p 2번
#include <stdio.h>

int main(void)
{
    int a;
    
    printf("Please enter a hexadecimal integer.");
    scanf("%x", &a);
    
    printf("It's %o in octal.\n", a);
    printf("It's %d in decimal.\n", a);
    printf("It's %#x in hexadecimal.\n", a);


    return 0;
}