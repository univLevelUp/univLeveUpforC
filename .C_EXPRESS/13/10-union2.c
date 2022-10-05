#include <stdio.h>
#include <string.h>

#define STU_NUMBER 1
#define REG_NUMBER 2

struct student
{
    int type;
    union
    {
        int stu_number;
        char reg_number[15];
    } id;
    char name[20];
};
void print(struct student s)
{
    switch (s.type)
    {
    case STU_NUMBER:
        printf("number: %d\n", s.id.reg_number);
        printf("name: %s\n", s.name);
        break;
    case REG_NUMBER:
        printf("date of birth: %s\n", s.id.reg_number);
        printf("name: %s\n", s.name);
        break;
    default:
        printf("error\n");
        break;
    }
}
int main(void)
{
    struct student s1, s2;

    s1.type = STU_NUMBER;
    s1.id.stu_number = 20190001;
    strcpy(s1.name, "ji eun");
    
    s2.type = REG_NUMBER;
    strcpy(s2.id.reg_number, "860101-1056076");
    strcpy(s2.name, "dong eun");

    print(s1);
    print(s2);    
}