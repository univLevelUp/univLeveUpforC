#include <stdio.h>
#include <string.h>

struct data
{
    char name[20];
    char homenumber[20];
    char phonenumber[20];
};

int main(void)
{
    struct data d[3];
    char name[20] = {0};
    for(int i = 0; i < 3; i++){
        printf("Enter name:");
        scanf("%s", d[i].name);
        printf("Enter homenumber:");
        scanf("%s", d[i].name);
        printf("Enter phonenumber:");
        scanf("%s", d[i].phonenumber);
    }
    printf("serch name: ");
    scanf("%s", name);
    for (int i = 0; i < 3; i++)
    {
        if(strcmp (name, d[i].name) == 0)
        {
            printf("home number: %s\n", d[i].homenumber);
            printf("phone number: %s\n", d[i].phonenumber);
        }
    }
    return 0;
}