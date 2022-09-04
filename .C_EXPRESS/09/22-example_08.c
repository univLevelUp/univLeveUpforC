#include <stdio.h>

int dig(int x);
int main(void)
{
    int input;
    printf("int: ");
    scanf("%d", &input);
    printf("number of digits: %d", dig(input));
    return 0;
}

int dig(int x)
{
    static int count = 0;
    if(x != 0)
    {
        dig(x / 10);
        count ++;
        return count;
    }
}