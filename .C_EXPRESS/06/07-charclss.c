#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter a letter: ");
    scanf("%c", &ch);

    if ( ch >= 'A' && ch <= 'Z')
        printf("%c is an uppercase letter.", ch);
    else if ( ch >= 'a' && ch <= 'z')
        printf("%c is lowercase.", ch);
    else if ( ch >= '0' && ch <= '0')
        printf("%c is a number.", ch);
    else 
        printf("%c is other characters.", ch);
        
    return 0;
}