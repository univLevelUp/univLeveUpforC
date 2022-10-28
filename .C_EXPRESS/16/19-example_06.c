#include <stdio.h>
#define GET_BIT(n, pos) ((n) & (1 << (pos)))

void display_bit(int value)
{
	int i;

	for (i=31;i>=0;i--)
		if( GET_BIT(value, i) )
            printf("1");
        else
            printf("0");
    printf("\n");
}

int main(void)
{
	int n, orientation, distance;

	printf("Enter an integer value: ");
	scanf("%d", &n);

	display_bit(n);

	return 0;
}