#include <stdio.h>

struct book
{
    int id;
    char title[100];
    char author[20];
};

int main(void)
{
    struct book b;
    b.id = 1;
    strcpy(b.title, "disappear with the wind");
    strcpy(b.author, "Margaret Mitchell");

    printf("{%d, %s, %s}", b.id, b.title, b.author);
    return 0;
}