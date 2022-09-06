#include <stdio.h>
#define STUDENTS 5 

int get_average(int scores[], int size);

int main(void)
{
    int scores[STUDENTS] = {1, 2, 3, 4, 5};
    int avg;

    avg = get_average(scores, STUDENTS);
    printf("average = %d\n", avg);

    return 0;
}
int get_average(int scores[], int size)
{
    int i;
    int sum = 0;

    for(i = 0; i < size; i++)
        sum += scores[i];

    return sum / size;
}