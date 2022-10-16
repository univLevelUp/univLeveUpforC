#include <stdio.h>

void set_max_ptr(int m[], int size, int **pmax);

int main(void)
{
    int m[6] = {5, 6, 1, 3, 7, 9};
    int *pmax;
	set_max_ptr(m, 6, &pmax);
	printf("The largest value is %d\n", *pmax);
	
    return 0;
}

void set_max_ptr(int m[], int size, int **pmax)
{
	int i;
	int max;
	max = m[0];

	for (i = 1;i < 6;i++)
    {
		if( m[i] > max ) 
        {
			max = m[i];

			(*pmax) = &m[i];
		}
	}
}