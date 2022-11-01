#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

typedef struct
{
	char name[30];
	char phone[20];
}DATA;

typedef struct NODE
{
	DATA data;
	struct NODE *link;
}NODE;

NODE *search_pos(NODE *plist, char name[]);
NODE *search(NODE *plist, char name[]);
NODE *create_node(char *name, char* phone, NODE *link);
void insert_node(NODE **phead, NODE *node, NODE *prev);
void print_menu();

int main(void)
{
	char name_t[30] = {'\0'};
	char phone_t[20]= {'\0'};
	char cmenu=1;
	int bEscape = FALSE;
	NODE* List = NULL;
	NODE* Temp = NULL;

	while(TRUE)
    {
		fflush(stdin);
		print_menu();
		
        printf("Please enter a number: ");
		scanf("%c", &cmenu);

		switch(cmenu)
        {
			case '1':
			    break;
			case '2':
                printf("Name: ");
                scanf("%s", name_t);

                printf("Number: ");
                scanf("%s", phone_t);

                insert_node(&List, create_node(name_t, phone_t, NULL),
                search_pos(List, name_t));

                printf("Added.\n");
			    break;
            case '3':
                printf("Enter a name to find: ");
                scanf("%s", name_t);

                Temp = search(List, name_t);

                if(Temp!=NULL)
                {
                    printf("I found the phone book.\n");
                    printf("Name: %s\nNumber: %s\n", Temp->data.name, Temp->data.phone);
                }
                else
                printf("No data found.\n");
                break;
			case '4':
                printf("Enter a name to find: ");
                scanf("%s", name_t);

                Temp = search(List, name_t);

                printf("Enter the name you want to change: ");
                scanf("%s", name_t);

                printf("Enter the number you want to change: ");
                scanf("%s", phone_t);

                strcpy(Temp->data.name, name_t);
                strcpy(Temp->data.phone, phone_t);

                printf("Data has been changed.\n");
			    break;
			case '5':
                bEscape = TRUE;
                break;
			default:
			    printf("You have entered it incorrectly. Please re-enter.\n");
			    break;
		}
		if(bEscape)
		    break;
	}

	return 0;
}

void print_menu()
{
	printf("------------------------------\n");
	printf("1. Initialize\n");
	printf("2. Add a phone number\n");
	printf("3. Search Phone Numbers\n");
	printf("4. Change phone number\n");
	printf("5. Termination\n");
	printf("------------------------------\n");
}

NODE *search_pos(NODE *plist, char name[])
{
	NODE *curr, *prev;

	prev = NULL;
	curr = plist;

	while(curr != NULL)
    {
		if(strcmp(curr->data.name, name) > 0)
		    break;
		prev = curr;
		curr = curr->link;
	}

	return prev;
}

NODE *search(NODE *plist, char name[])
{
	NODE *curr;

	curr = plist;
	while(curr != NULL)
    {
		if(strcmp(curr->data.name, name) == 0)
            break;
		curr = curr->link;
	}
	
    return curr;
}

NODE *create_node(char *name, char* phone, NODE *link)
{
	NODE *new_node;
	new_node = (NODE *)malloc(sizeof(NODE));
	
    if(new_node == NULL)
    {
		fprintf(stderr, "Memory allocation error\n");
		exit(1);
	}

	strcpy(new_node->data.name, name);
	strcpy(new_node->data.phone, phone);

	new_node->link = link;

	return(new_node);
}

void insert_node(NODE **phead, NODE *node, NODE *prev)
{
	if(*phead == NULL)
    {
		*phead = node;
		node->link = NULL;
	}
    else if(prev == NULL)
    {
		node->link = (*phead)->link;
		(*phead) = node;
	} 
    else
    {
		node->link = prev->link;
		prev->link = node;
	}
}