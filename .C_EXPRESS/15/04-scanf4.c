#include <stdio.h>

main(void)
{
    char s[80];

    printf("Please enter a string:");
    scanf("%[abc]", s);
    printf("String entered = %s\n", s);
    
    return 0;
}