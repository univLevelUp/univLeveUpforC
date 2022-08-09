#include <stdio.h>

int main(void)
{
    int grade, n;
    double sum, average;

    grade = 0;
    n = 0;
    sum = 0;

    printf("Enter a negative number to exit.\n");

    while (grade >= 0)
    {
        printf("Enter a grade: ");
        scanf("%d", &grade);
        
        sum += grade;
        n++;
    }
        
        sum = sum - grade;
        n--;

        average = sum / n;
        printf("average:%f", average);
    return 0;
}