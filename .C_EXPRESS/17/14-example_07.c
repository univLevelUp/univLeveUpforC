#include <stdio.h>
#include <stdlib.h>
#define INSERT 1
#define PRINT 2
#define QUIT 3
#define S_SIZE 50

typedef struct data
{
	char title[S_SIZE];
	int year;
}DATA;

typedef struct NODE
{
	DATA data;
	struct NODE *link;
}NODE;

NODE *insert_node(NODE *plist,NODE *pprev,DATA item)
{
	NODE *pnew = NULL;

	if(!(pnew = (NODE*)malloc(sizeof(NODE))))
    {
		printf("Memory dynamic allocation error\n");
		exit(1);
	}

	pnew->data = item;

	if(pprev == NULL)
    {
		pnew->link = plist;
		plist = pnew;
	} 
    else
    {
		pnew->link = pprev->link;
		pprev->link = pnew;
	}

	return plist;
}

void display_menu()
{
	printf("-------------------------------------\n");
	printf("1. Add movie information\n");
	printf("2. Film information output\n");
	printf("3. Termination\n");
	printf("-------------------------------------\n");
}

int get_selectde_menu()
{
	int selmenu = 0;

	printf("Select a number: ");
	scanf("%d", &selmenu);

	return selmenu;
}

DATA get_input()
{
	DATA input;

	printf("Enter the title of the movie: ");
	scanf("%s", input.title);

	printf("Enter the year of the movie's release: ");
	scanf("%d", &input.year);

	return input;
}

void print_list(NODE *plist)
{
	NODE *ptr;

	for (ptr = plist; ptr; ptr = ptr->link)
    {
		printf("-------------------------------------\n");
		printf("Title: %s\n", ptr->data.title);
		printf("Year of release: %d\n", ptr->data.year);
	}
	printf("-------------------------------------\n");
}

void destroy_nodes(NODE *plist)
{
	NODE *temp;

	while(plist)
    {
		temp = plist;
		plist = plist->link;

		free(temp);
	}
}

int main(void)
{
	NODE *plist = NULL;
	int selected = 0;
	DATA d;

	while(selected != QUIT)
    {
		display_menu();

		selected = get_selectde_menu();

		switch(selected)
        {
			case INSERT:
                d = get_input();
                plist = insert_node(plist,NULL,d);
                break;
			case PRINT:
                print_list(plist);
                break;
			case QUIT:
                destroy_nodes(plist);
                break;
		}
	}

	return 0;
}