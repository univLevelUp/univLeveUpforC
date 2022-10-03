#include <stdio.h>

struct student{
    int number;
    char name[10];
    double grade;
};

int main(void)
{
    struct student s;
    
    printf("number: ");
    scanf("%d", &s.number);

    printf("name: ");
    scanf("%s", &s.name);

    printf("grade: ");
    scanf("%lf", &s.grade);

    printf("number: %d\n", s.number);
    printf("name: %s\n", s.name);
    printf("grade: %f\n", s.grade);

    return 0;
}