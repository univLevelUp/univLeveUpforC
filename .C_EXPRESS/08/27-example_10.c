#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand()
{
    return rand() % 2;
}

int main(void)
{
    int answer, user;
    char con;
    srand(time(NULL));

        answer = b_rand();
        printf("\nfornt or back (1 or o): ");
        scanf("%d", &user);
            
            if (answer == user)
                printf("right!\n");
            else 
                printf("wrong\n");
                
    return 0;
}