#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    char seps[] = " "; 
    char *token, *sung, *name;
    int i = 0;
    int j;
    printf("Please enter your name in capital letters: ");
    gets(s);
    
    token = strtok(s, seps);
    sung = token;

    token = strtok(NULL, seps);
    name = token;

	for (i=0;i<strlen(name);i++)
	    name[i] = tolower(name[i]);

	for (i=0;i<strlen(sung);i++)
	    sung[i] = tolower(sung[i]);

	printf("%s, %s\n", name, sung);

    return 0;
}