#include <stdio.h>

int main(void)
{
    int time, age ;

    printf("Please enter the current time and age(time, age): ");
    scanf("%d%d", &time, &age);
    
    if (time < 17)
    {
        if (age >= 3 && age <= 12)
            printf("The fare is 25,000 won.");
        else if (age >= 65)
            printf("The fare is 25,000 won.");
        else
            printf("The fare is 30,000 won.");
    }
    else
        {
        if(time > 17)
            printf("The fare is 10,000 won.");
        }
    return 0;
}