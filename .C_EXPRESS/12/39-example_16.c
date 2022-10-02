#include <stdio.h>
#include <string.h>

int main(void) 
{
	char s[100];
    int s_long;
    int i, j;

    printf("Enter the text you want to advertise:");
	gets(s);

    s_long = strlen(s);
    printf("==========================\n");
    
    for(i = 0; i < s_long; i++)
    {
        for(j = 0; j < (i + s_long); j++)
        {
            if(j < s_long)
                putchar(s[j]);
            else
                putchar(s[j - s_long]);
        }
        putchar('\n');
    }
    
    return 0;
}