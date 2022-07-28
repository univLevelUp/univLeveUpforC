#include <stdio.h>

int main(void)
{
    int id, pass;

    printf("Enter your ID and password in 4 numbers:\n");
    printf("id: ____\b\b\b\b");
    scanf("%d", &id);
    printf("password: ____\b\b\b\b");
    scanf("%d", &pass);
    printf("\a id: \"%d\", passwaord: \"%d.\n", id, pass);

    return 0;
}