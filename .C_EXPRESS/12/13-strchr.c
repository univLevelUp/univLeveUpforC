#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "language";
    char c = 'g';
    char *p;
    int loc;
    p = strchr(s, c);
    loc = (int)(p - s);
    if(p != NULL)
        printf("%s found the first %c in %d.", s, c, loc);
    else
        printf("%c not found.");
}