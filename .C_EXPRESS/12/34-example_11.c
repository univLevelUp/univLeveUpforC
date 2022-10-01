#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    char seps[] = " "; 
    char *token[100];
    int i = 0;
    int j;
    printf("text: ");
    gets(s);
    
    token[0] = strtok(s, seps);

    while(token[i] != NULL)
    {
        token[i+1] = strtok(NULL, seps);
        i++;
    }
    for (j = i - 1;j >= 0;j--) {

		printf("%s ", token[j]);
	}

    return 0;
}