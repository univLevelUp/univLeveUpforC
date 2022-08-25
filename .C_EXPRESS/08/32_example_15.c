#include <stdio.h>
#include <math.h>

int is_prime(int n) {
	int a;
	int count = 0;
	for (a = 2; a < n; a++)
    {
		if (n % a == 0) 
			return 1;
        else 
            return 0;
	}

}
int main(void) {
	int count = 0;
	for (int i = 2; i <= 100; i++)
    {
	    if (is_prime(i)==0) {
			printf("%d\t", i);
			count++;
			if (count == 5) 
            {
				count = 0;
				printf("\n");
				continue;
			}
		}
	}
	return 0;
}