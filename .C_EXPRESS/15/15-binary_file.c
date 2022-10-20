#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct student
{
    int number;
    char name[20];
    double gpa;
};

int main(void)
{
    struct student table[SIZE] =
    {
        {1, "Kim", 3.99},
        {2, "Min", 2.68},
        {3, "Lee", 4.01}
    };
    struct student s;
    FILE *fp = NULL;

    int i;

    if((fp = fopen("student.dat", "wb")) == NULL)
    {
        printf("Unable to open file for output.\n");
        exit(1);
    }
    
    fwrite(table, sizeof(struct student), SIZE, fp);
    fclose(fp);

    if((fp = fopen("student.dat", "rb")) == NULL)
    {
        printf("Unable to open file for input.\n");
        exit(1);
    }

    for(i = 0; i < SIZE; i++)
    {
        fread(&s, sizeof(struct student), 1, fp);
        printf("Class = %d, Name = %s, grade = %f\n", s.number, s.name, s.gpa);
    }
    
    return 0;
}