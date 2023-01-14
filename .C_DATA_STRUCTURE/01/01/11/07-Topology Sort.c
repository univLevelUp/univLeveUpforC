#define MAX_STACK_SIZE 100
typedef int element;
typedef struct{
    element stack[MAX_STACK_SIZE];
    int top;
}  StackType;

void init(StackType *s)
{
    s->top = -1;
}

int is_empty(StackType *s)
{
    return (s->top == -1);
}

int is_full(StackType *s)
{
    return (s->top == (MAX_STACK_SIZE - 1));
}

void push(StackType *s, element item)
{
    if(is_full(s)){
        fprintf(stderr, "Stack saturation error\n");
        return;
    }
    else s->stack[++(s->top)] = item;
}