#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char* list[10];

    for(int i = 0; i < 10; i++)
    {
        list[i] = (char*)malloc(100*sizeof(char));
        if(list[i] == NULL)
        {
            printf("malloc() failure!\n\n");
            exit(1);
        }
        stcrpy(list[i], "test string");
    }
    for(int i = 0; i< 10; i++)
    {
        printf("String %d: %s\n", i, list[i]);
    }
    
    return 0;
}