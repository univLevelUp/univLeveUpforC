#include <stdio.h>
#include <string.h>

int str_char(char *s, int c);
int main(void)
{
    char s[100] = {0};
    char found;
    printf("Please enter a sentence:");
    gets(s);
    printf("Enter characters to count:");
    scanf("%c", &found);
    printf("Number of %c: %d", found, str_char(s, found));
    return 0;
}
int str_char(char *s, int c)
{
    int i, count = 0;

    for(i = 0; i < strlen(s); ++i)
    {
        if(s[i] == c)
        {
            count ++;
        }
    }
    return count;
}