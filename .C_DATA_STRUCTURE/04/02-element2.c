#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100
#define MAX_STRING 100

typedef struct 
{
    int student_no;
    char name[MAX_STRING];
    char address[MAX_STRING];
}element;

element stack[MAX_STACK_SIZE];
int top = -1;

int is_empty()
{
    return (top == -1);
}

int is_full()
{
    (top == (MAX_STACK_SIZE - 1));
}

void push(element item)
{
    if(is_full())
    {
        fprintf(stderr, "Stack saturation error\n"); 
        return;
    }
    else stack[++top] = item;
}

element pop()
{
    if(is_empty())
    {
        fprintf(stderr, "Stack space error\n");
        exit(1);
    }
    else return stack[top--];
}

element peek()
{
    if(is_empty())
    {
        fprintf(stderr, "Stack space error\n");
        exit(1);
    }
    else return stack[top];
}

int main(void)
{
    element ie = { 20190001, "HONG", "SEOUL"};
    element oe;

    push(ie);
    oe = pop();
    
    printf("studnetname: %d", oe.student_no);
    printf("name: %s\n", oe.name);
    printf("address: %s\n", oe.address);

    return 0;
}