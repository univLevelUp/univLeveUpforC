#include <stdio.h>
//
int get_integer()
{
    int value;
    printf("int: ");
    scanf("%d", &value);
    return value;
}
//
int add(int  x, int y)
{
    return x + y;
}

int main(void)
{
    int x = get_integer();
    int y = get_integer();
    
    int sum = add(x, y);
    printf("sum = %d", sum);
    return 0;
}