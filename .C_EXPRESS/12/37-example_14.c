#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void) {
	char s[100], find[100], replace[100], target[100];
	char *token;
    char seps[] = " ";

	printf("Please enter a string:");
	gets(s);

	printf("String to find:");
	gets(find);

	printf("String to replace");
	gets(replace);
	token = strtok(s, seps);

	if(strcmp(token, find) ==0)
    {
        strcat(target, replace);
    }
    else
    {
		strcat(target, token);
		token = strtok(NULL, seps);
        strcat(target, " ");
    }
	printf("Modified string:%s", target);
    
	return 0;
    }


