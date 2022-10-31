#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, i;
	char **A;

	printf("Number of strings:");
	scanf("%d", &n);

	if((A = (char **)malloc(n*sizeof(char*))) != NULL)
    {
		for(i = 0; i < n; i++)
		A[i] = (char*)malloc(100);
	}

	for(i = 0; i < n; i++)
	sprintf(A[i] ,"%d", i);

	for(i = 0; i < n; i++)
	printf("%s \n", A[i]);

	for(i = 0; i < n; i++)
	free(A[i]);

	free(A);

	return 0;
}