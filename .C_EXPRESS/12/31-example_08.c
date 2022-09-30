#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_word(char *s);
int main(void)
{
    char wc[100];
    
    printf("Please enter a sentence with blank characters: ");
    gets_s(wc, 100);
    printf("Number of words: %d\n", count_word(wc));
    return 0;
}

int count_word(char *s)
{
    int i, wc= 0, waiting = 1;

    for(i = 0; s[i] != NULL; ++i){
        if(isalpha(s[i]))
        {
            if(waiting)
            {
                wc++;
                waiting = 0;
            }
        }
        else
            waiting = 1;
    }
        return wc;
}