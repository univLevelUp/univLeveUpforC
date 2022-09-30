#include <stdio.h>
#include <ctype.h>
#include <string.h>

int get_response(char *prompt);

int main(void)
{
    int result;
    char answer[100] = {0};
    printf("Would you like to play a game?");
    gets(answer);
    result = answer;
    get_response(answer);

    if (result == 1)
        printf("a positive answer");
    else 
        printf("a negative answer");

    return 0;
}

int get_response(char *prompt)
{
    if (prompt == 'yes' || 'ok')
        return 1;
    else
        return 0;
}