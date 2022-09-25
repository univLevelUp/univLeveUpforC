#include <string.h>
#include <stdio.h>

int main(void)
{
    char s[] = "A joy that's shared is a joy made double";
    char sub[] = "joy";
    char *p;
    int loc;

    p = strstr(s, sub);

    loc = (int)(p-s);
    if(p != NULL)
        printf("First %s found in %s at %d\n", s, sub, loc);
    else   
        printf("%s not found.\n", sub);
    
    return 0;
}