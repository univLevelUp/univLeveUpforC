#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int count, i, value, sum;
    int sum = 0;
	int *darray;

	printf("Number of integers: ");
	scanf("%d", &count);

	darray = (int *)malloc(count*sizeof(int));

	if(darray == NULL)
    {
		printf("Dynamic memory allocation error");
		exit(1);
	}

	for(i = 0; i < count; i++)
    {
		printf("Enter a positive integer:");
		scanf("%d", &darray[i]);
	}

	for(i = 0; i < count; i++)
    {
		sum += darray[i];
	}

	printf("The sum is %d.\n", sum);

	return 0;
}