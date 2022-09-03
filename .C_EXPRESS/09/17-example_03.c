#include <stdio.h>
#define PASS 1234

int check();

int main(void)
{
    int password;
    while(1){
            printf("password: ");
            scanf("%d", &password);
            check(password);
            if (cheak() == 0)
                break;
    }   
}

int check(int password)
{
    static int try = 0;
    if (password == PASS){
        printf("pass\n");
        try ++;
        return 0;
    }
    else if(password =! PASS)
    {
        return 1;
        try++;
    }
    else if(try == 3)
        printf("over\n");
        return 0;
}