#include <stdio.h>

struct student
{
    int number;
    char name[20];
    double grade;
};

struct student list[] = {
    {20180001, "ji eun", 4.2},
    {20180002, "suzi", 3.2},
    {20180003, "dongeun", 3.9}
};

int main(void)
{
    struct student super_stu;
    int i, size;

    size = sizeof(list) / sizeof(list[0]);

    super_stu = list[0];
    for(i = 1; i < size; i++)
    {
        if(list[i].grade > super_stu.grade)
            super_stu = list[i];
    }
    printf("best sudent = (name: %s, number: %d, grade: %f\n", super_stu.name, super_stu.number, super_stu.grade);
    
    return 0;
}