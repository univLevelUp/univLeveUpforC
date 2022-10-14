#include <stdio.h>

int get_average(int list[], int n);

int main(void)
{
	int score[3][3] = 
    { 
        {100, 30, 67},
        {89, 50, 12},
        {19, 60, 90}
	};
    int i, avg;
	
    for (i = 0;i < 3;i++)
    {
		avg = get_average(score[i], 3);
		printf("Average value of row %d: %d\n", i, avg);
	}

    return 0;
}

int get_average(int list[], int n)
{
	int i;
	int sum = 0;

	for (i=0;i<n;i++)
    {
	    sum += list[i];
    }
    
    return sum/n;
}