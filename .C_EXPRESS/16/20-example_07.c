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

	printf("Enter an integer value:");
    scanf("%d", &n);

	printf("Enter 0 for left movement and 1 for right movement:");
    scanf("%d", &orientation);

	printf("Distance to move:");
	scanf("%d", &distance);

	printf("Before moving:");

	display_bit(n) ;

	printf("After moving:");

	if( orientation == 0 )
        display_bit(n << distance);
    else
        display_bit(n >> distance);
}