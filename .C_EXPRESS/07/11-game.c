#include <stdio.h>

int main(void)
{
    int answer = 59;
    int guess;
    int tries = 0;
    
    do
    {
        printf("answer ?: ");
        scanf("%d", &guess);
        tries++;

        if (guess > answer)
            printf("down\n");
        if (guess < answer)
            printf("up\n");
    } while (guess != answer);
      
     printf("answer !, tries:%d\n", tries);    
    return 0;
}