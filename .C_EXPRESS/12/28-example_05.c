#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char input;
    while (1)
    {
        printf("char: ");
        input = getchar();
        getchar();
        if(islower(input))
        {
            putchar(toupper(input));
            printf("\n");
        }
        if (isupper(input))
        {
            putchar(tolower(input));
            printf("\n");
        }
    }
    
    return 0;
}