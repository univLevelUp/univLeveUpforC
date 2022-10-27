#include <stdio.h>
#define IS_SPACE(c) ((c)==' ' || (c)=='\t' || (c)=='\n')

int main(void)
{
	char str[100];
    int i, count;
    
    i=0;
    count=0;

	printf("Please enter a string: ");
    gets(str);

	while(str[i] != NULL)
    {

		if(IS_SPACE(str[i]))
			count++;
			i++;
    }
	
    printf("Number of blank characters: %d \n", count); 
            return 0;
}