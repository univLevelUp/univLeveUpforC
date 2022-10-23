#include <stdio.h>
#include <string.h>
#define TITLE_SIZE 50
#define NAME_SIZE 50
#define PUBLISHER_SIZE 50

typedef struct BOOK
{
    char title[TITLE_SIZE];
    char author[NAME_SIZE];
    char publisher[PUBLISHER_SIZE];
}BOOK;

void add_record(BOOK library[], int count);
void menu();
int get_input();
void search_record(BOOK library[], int count);
void print_record(BOOK library[], int count);

int main(void)
{

    int num, count = 0;

    BOOK library[30] = {'\0'};

    while(1) {

        menu();

        num = get_input();

        switch(num)
        {
            case 1:
                add_record(library, count);
                count++;
                continue;
            case 2:
                print_record(library, count);
                continue;
            case 3:
                search_record(library, count);
                continue;
            case 4:
                return -1;
        }

        return 0;
    }
}

void add_record(BOOK library[], int count)
{
    int type;

    fflush(stdin);

    printf("Book Name:");
    gets(library[count].title);

    printf("uthora:");
    gets(library[count].uthora);

    printf("publisher:");
    gets(library[count].publisher);
}

void menu()
{
    printf("====================\n");
    printf(" 1. add\n");
    printf(" 2. Output\n");
    printf(" 3. search\n");
    printf(" 4. END\n");
    printf("====================\n");
}

int get_input()
{
    int num;

    printf("int : ");
    scanf("%d",&num);

    return num;
}

void search_record(BOOK library[], int count)
{

    int i;
    char title[TITLE_SIZE];

    fflush(stdin);

    printf("Book Name: ");
    gets(title);

    for (i = 0; i < count; i++)
    {

        if(strcmp(title,library[i].title) == 0) {

            printf("publisher %s\n",library[i].publisher);

            return;
        }
    }

    printf("The book you are looking for is not on the table.\n");
}

void print_record(BOOK library[], int count)
{
    int i;

    fflush(stdin);

    for (i = 0; i < count; i++) {
        printf("Book Name: %s\n",library[i].title);
        printf("author : %s\n",library[i].author);
        printf("publisher : %s\n",library[i].publisher);
    }
}