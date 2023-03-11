#include <stdio.h>

void SoSimpleFuncc(void)
{
    printf("I'm so simple");
}

int main(void)
{
    int num = 20;
    void * ptr;

    ptr = &num;
    printf("%p \n", ptr);

    ptr = SoSimpleFuncc;
    printf("%p \n", ptr);
    return 0;
}