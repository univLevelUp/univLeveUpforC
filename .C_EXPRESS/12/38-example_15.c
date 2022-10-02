#include <stdio.h>
#include <string.h>

int main(void) 
{
	char s[100];
	char op[100];
	int x,y;
	char *token;
	printf("Please enter the operation:");
	gets(s);
	token = strtok(s, " ");
	token = strtok(NULL, " ");
	token = strtok(NULL, " ");

	if(strcmp(op, "add") == 0)
		printf("Calculation result = %d", x+y);
    if(strcmp(op, "sub") ==0)
		printf("Calculation result = %d", x-y);
    if(strcmp(op, "mul") ==0)
		printf("Calculation result = %d", x*y);
    if(strcmp(op, "div")==0)
		printf("Calculation result = %d", x/y);

	return 0;
}