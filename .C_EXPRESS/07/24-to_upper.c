#include <stdio.h>

int main(void)
{
    char letter;
    
    while(1)
    {
        printf("so letter?: ");
        scanf(" %c", &letter);
        
        if (letter == 'Q')
            break;
        if (letter <'a' || letter > 'z')
            continue;

            letter -= 32;
            printf("big letter: %c\n", letter);
    }

    return 0;
}