#include <stdio.h>
#include <stdlib.h>

char* get_word()
{
	char* s = (char *)malloc(50);

	if(s == NULL)
    {
		printf("Memory assignment error\n");
		exit( 1 );
	}

	printf("Enter a word (up to 50 characters):");
	scanf("%s", s);

	return s;
}

int main(void)
{
	char *p;

	p = get_word();
	free(p);

	return 0;
}