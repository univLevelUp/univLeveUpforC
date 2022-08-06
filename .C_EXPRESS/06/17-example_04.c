#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    int com, user;
    srand(time(NULL));
    
    com = rand() % 3 + 1;

    printf("1 : g, 2: v, 3: b");
    scanf("%d", &user);

    if (user == 1 && com ==2)
        printf("com win");
    else if (user == 1 && com == 3)
        printf("user win");
    else if (user == 2 && com == 1)
        printf("user win");
    else if (user ==2 && com == 3)
        printf("com win");
    else if (user == 3 && com == 1)
        printf("comn win");
    else if (user ==3 && com == 2)
        printf("user win");
    else
        printf("the same");
    return 0;
}