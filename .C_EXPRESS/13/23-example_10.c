#include <stdio.h>

struct employee
{
    int number;
    char name[20];
    char phone_number[20];
    int age;
};

int main(void)
{
    struct employee e[10] = {
    {1, "jieun1", "0100000000", 20},
    {2, "jieun2", "0100000000", 21},
    {3, "jieun3", "0100000000", 22},
    {4, "jieun4", "0100000000", 33},
    {5, "jieun5", "0100000000", 24},
    {6, "jieun6", "0100000000", 25},
    {7, "jieun7", "0100000000", 35},
    {8, "jieun8", "0100000000", 27},
    {9, "jieun9", "0100000000", 28},
    {10, "jieun10", "0100000000", 30}
    };

    for(int i = 0; i < 10; i++)
    {
        if(e[i].age >= 20 && e[i].age <= 30)
            printf("name: %s, age= %d\n", e[i].name, e[i].age);
    }

    return 0;
}
