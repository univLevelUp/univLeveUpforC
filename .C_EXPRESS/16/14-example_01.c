#include <stdio.h>
#define MIN(x, y) (x) < (y) ? (x) : (y)
#define GET_MIN(x, y, z) (MIN(x, y)) < (z) ? (MIN(x, y)) : (z)

int main(void)
{
	int x, y, z, result;
	
    printf("Enter 3 integers.");
	scanf("%d %d %d", &x, &y, &z);

	result = GET_MIN(x, y, z);
	printf("minimum is %d", result);

	return 0;
}