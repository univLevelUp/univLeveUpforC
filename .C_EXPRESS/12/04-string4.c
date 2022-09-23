#include <stdio.h>

int main(void)
{
    char str[30] = "C language is easy";
    int i = 0;

    while(str[i] != 0)
        i++;
    printf("The string \"%s\" is %d in length.\n", str, i);

    return 0;
}