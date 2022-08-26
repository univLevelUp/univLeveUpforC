#include <stdio.h>

int factorial(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++) {
		f = f * i;
	}
	return f;
}

int main(void)
{
	int n;
	double result = 1.0;
	printf("int: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		result += 1.0 / factorial(i);
	}
	printf("result: %f", result);
	return 0;
}