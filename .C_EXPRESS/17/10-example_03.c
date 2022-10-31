#include <stdio.h>
#include <stdlib.h>

typedef struct contacts
{
	char name[100];
	char mobile_phone[100];
}

CONTACTS;

int main(void)
{
	CONTACTS *contacts;
	int size, i;

	printf("Number of addresses: ");
	scanf("%d", &size);

	contacts = (CONTACTS *)malloc(sizeof(CONTACTS)* size);

	if(contacts == NULL)
    {
		printf("Dynamic memory assignment error");
		exit(1);
	}

	for(i = 0; i < size; i++)
    {
		printf("Please enter a name:");
		fflush(stdin);

		printf("Enter your mobile phone number:");
		gets(contacts[i].mobile_phone);
	}

	printf("========================\n");
	printf("Name MobileNumber\n");
	printf("========================\n");

	for(i = 0; i < size; i++)
	printf("%s %s \n", contacts[i].name, contacts[i].mobile_phone);

	printf("\n========================\n");
	free(contacts);

	return 0;
}