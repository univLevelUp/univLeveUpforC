#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define S_SIZE 50

typedef struct NODE
{
        char title[S_SIZE];
        int year;
        struct NODE *link;
}NODE;

int main(void)
{
    NODE *list = NULL
    NODE *prev, *p, *next;
    char buffer[S_SIZE];
    int year;

    while(1)
    {
        printf("Enter a title for the book: (Enter to exit)");
        gets_s(buffer, S_SIZE);
        
        if(buffer[0] == '\0')
            break;
        
        p = (NODE *)malloc(sizeof(NODE));
        strcpy(p->title, buffer);
        
        printf("Enter the year of publication of the book:");
        gets_s(buffer, S_SIZE);
        
        year = atoi(buffer);
        p->year = year;

        if(list == NULL)
            list = p;
        else
            prev->link = p;

        p->link = NULL;
        prev = p;
    }
    printf("\n");

    p = list;
    while(p != NULL)
    {
        printf("[%s, %d]->", p->title, p->year);
        p = p->link;
    }
    printf("\n");

    p = list;
    while(p != NULL)
    {
        next = p->link;
        free(p);
        p = next;
    }

    return 0;
}