#include <stdio.h>

int main(void) {
	
	int x, result;

	printf("Enter an integer: ");
	scanf_s("%d", &x);

	result = ~x;

	result += 1;

	printf("2의 보수 : %d\n", result);

	return 0;

}
