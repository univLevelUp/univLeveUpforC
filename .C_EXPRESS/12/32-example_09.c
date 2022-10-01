#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[100] = {0};
    printf("Please enter text: ");
    gets(s);
    if(!isupper (s[0]));
        s[0] = toupper(s[0]);
    if(s[strlen(s)-1] != '.')
        s[strlen(s)] = '.';
    printf("Modified text: %s", s);
    return 0;
}