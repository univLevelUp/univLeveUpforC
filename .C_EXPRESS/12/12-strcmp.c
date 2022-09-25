#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[80];
    char s2[80];
    int result;

    printf("Enter the first word: ");
    scanf("%s", s1);
    printf("Enter the second word:");
    scanf("%s", s2);

    result = strcmp(s1, s2);
    if(result < 0)
        printf("%s is front of %s.\n", s1, s2);
    else if( result == 0)
        printf("%s is equal to %s.", s1, s2);
    else
        printf("%s is back %s.\n", s1, s2);
}