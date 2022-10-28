#include <stdio.h>

int main(void)
{

	char s[100];
	int i;

	printf("Please enter a string:");
	scanf("%s", s);

	for (i=0;i<strlen(s);i++)
    {
        s[i] = s[i] ^ 0x20;
	}

	printf("Result string:%s\n", s);

    return 0;
}