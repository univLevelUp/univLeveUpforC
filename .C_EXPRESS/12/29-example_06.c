#include <stdio.h>
#include <string.h>

void str_upper(char *s);

int main(void)
{
    char s[100] = {0};
    char found;
    printf("Please enter a sentence with blank characters: ");
    gets(s);
    str_upper(s);
    printf("Sentence returned: %s\n", s);
    return 0;
}

void str_upper(char *s)
{
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
    }
}
