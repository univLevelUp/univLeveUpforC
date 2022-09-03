#include <stdio.h>
#define PASS 1234

int check(password);

int main(void)
{
    int password;

    for(int i = 0; i = 3; i++)
    {
        printf("password: ");
        scanf("%d", &password);
        check(password);
    }
}

int check(password){
    static int try = 0;

        if (try == 2){
            printf("over\n");
        }
        else if(password != PASS)
        {
            try++;
            return 1;
        }
        else if(password == PASS)
        {
            printf("pass\n");
            try ++;
            return 0;
        }
}