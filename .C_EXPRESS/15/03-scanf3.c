#include <stdio.h>

int main(void)
{
    char c;
    char s[80], t[80];

    printf("Enter a space-separated string: ");
    scanf("%s%c%s", s, &c, t);

    printf("First string entered = %s\n", s);
    printf("Characters entered = %c\n", c);
    printf("Second string entered = %s\n", t);
    
    return 0;
}