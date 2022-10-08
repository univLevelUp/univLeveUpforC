#include <stdio.h>

struct food
{
    char name[100];
    int calories;
};

int main(void)
{
    int sum = 0;
    struct food food_array[3] = {
    {"banana", 100},
    {"apple", 200},
    {"coke", 300}};

    for(int i = 0; i < 3; i++)
    {
        sum += food_array[i].calories;
    }
    printf("calories sum = %d", sum);
}