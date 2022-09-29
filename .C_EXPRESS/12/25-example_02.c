#include <stdio.h>
#include <string.h>

int main(void)
{

    char input[100];
    char temp[100];
	int i;
    int j=0;

    printf("Please enter a sentence with blank characters: ");
    gets(input);

	for (i = 0; i < (int)strlen(input); i++)
    {
		if(input[i] != ' ' )
		temp[j++] = input[i];
	}

	temp[j]=0;

	strcpy(input, temp);
    printf("%s", input);
    return 0;
}
