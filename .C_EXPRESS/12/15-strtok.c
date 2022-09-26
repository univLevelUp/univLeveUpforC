#include <stdio.h>
#include <string.h>

char s[] = "MAN is immortal, because he has a soul";
char seps[] = " ,\t\n";
char *token;

int main(void)
{
    token = strtok(s, seps);

    while(token != NULL)
    {
        printf("token: %s\n", token);
        token = strtok(NULL, seps);
    }
    return 0;
}