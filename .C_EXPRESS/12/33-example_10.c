#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[100] = {0};
    int str_len;
    printf("Please enter text: ");
    gets(s);
	str_len = strlen(s);

	for (int i = 0; i < str_len / 2; i++)
    {
        if(s[i] != s[str_len - i -1])
        {
            printf("not palindrome");
        }
    }
    printf("palindrome");
	return 0;
}
