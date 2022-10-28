#include <stdio.h>
#define SET_BIT(n, pos) ((n) |= (1 << (pos)))
#define GET_BIT(n, pos) ((n) & (1 << (pos)))
#define CLR_BIT(n, pos) ((n) &= (~(1) << (pos)))

int main(void)
{

    int n;

	n = 0x808081;
	printf("GET_BIT(): %d \n", GET_BIT(n, 0));

	SET_BIT(n, 2);
    
    printf("%#x \n", n);

	return 0;
}