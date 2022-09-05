#include <stdio.h>
#define STUDENTS 5

int main(void)
{
    int scores[STUDENTS];
    int sum = 0;
    int i, average;
    
    for (i = 0; i < STUDENTS; i++)
    {
        printf("Enter students' grades: ");
        scanf("%d", &scores[i]);
    }
    for (i = 0; i < STUDENTS; i++)
        sum += scores[i];

    average = sum / STUDENTS;
    printf("average = %d", average);
    
    return 0;
}