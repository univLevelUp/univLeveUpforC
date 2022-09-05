#include <stdio.h>
#define SIZE 10
int main(void)
{
    char ans1;
    int ans2;
    int seats[SIZE] = {0};
    while (1)
    {
        printf("Would you like to reserve a seat? ('y' or 'n')");
        scanf("%c", &ans1);
            if(ans1 == 'n')
                break;
        printf("======================\n");
        printf("1 2 3 4 5 6 7 8 9 10\n");
        printf("======================\n");
        for (int i = 0; i < SIZE; i++)
            printf("%d ", seats[i]);
            printf("\n");
        
        printf("Which seat should I reserve?\n");
        scanf("%d", &ans2);
        if(seats[ans2-1] == 0)
        {
            seats[ans2-1] = 1;
            printf("You have a reservation.\n");
        }
        else
            printf("This seat is already reserved.\n");
    }
}