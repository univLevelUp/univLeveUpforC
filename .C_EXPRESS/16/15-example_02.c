#include <stdio.h>
#define ARRAY_INIT(array, size, value)
{
	int i;

	for (i = 0; i < size;i++)\
	    array[i]=(value);
}

int main(void)
{
	int a[10];

	ARRAY_INIT(a, 10, 0);

	return 0;
}