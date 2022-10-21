#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];
	char c;

	printf("1 file name: ");
	scanf("%s", file1);
	printf("2 file name: ");
	scanf("%s", file2);


	if( (fp1 = fopen(file1, "r")) == NULL )
    {
	    fprintf(stderr,"Unable to open source file %s\n", file1);
		exit(1);
	}

	if( (fp2 = fopen(file2, "w")) == NULL )
    {
		fprintf(stderr,"Unable to open source file %s\n", file2);
		exit(1);
	}

	while(1)
    {
		c = fgetc(fp1);
		if( c== EOF)
		break;
		fputc(toupper(c), fp2);
	}

	fclose(fp1);
	fclose(fp2);
	return 0;
}