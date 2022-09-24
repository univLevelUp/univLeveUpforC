#include <stdio.h>

int main(void)
{
    char name[100];
    char address[100];

    printf("name: ");
    scanf("%s", name);
    printf("address: ");
    scanf("%s", address);

    printf("name: %s \n", name);
    printf("address: %s \n", address);
    
    return 0;
}