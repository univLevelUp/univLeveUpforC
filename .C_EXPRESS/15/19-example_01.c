#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];
	
    printf("1 file name: ");
	scanf("%s", file1);
	printf("2 file name: ");
	scanf("%s", file2);

	if( (fp1 = fopen(file1, "r")) == NULL )
    {
		fprintf(stderr,"Unable to open source file %s.\n", file1);
		exit(1);
	}

	// 두번째 파일을 읽기 모드로 연다.

	if( (fp2 = fopen(file2, "r")) == NULL )
    {
		fprintf(stderr,"Unable to open copy file %s.\n", file2);
		exit(1);
	}

	while(1)
    {
		int c1 = fgetc(fp1);
		int c2 = fgetc(fp2);

		if( c1 == EOF || c2 == EOF )
		break;

		if( c1 != c2 )
        {
			printf("diffrent\n");
			return 0;
		}
	}

	printf("same\n");
	
    fclose(fp1);
	fclose(fp2);
	
    return 0;
}