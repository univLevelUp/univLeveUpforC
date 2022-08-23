#include <stdio.h>

int print_value(int n)
{
    for (int i=1; i <= n; i++)
    {
        printf("*");
    }
            printf("\n");
}
int main(void)
{
    int h;
    while (1)
    {
    printf("int: ");
    scanf("%d", &h); 
        if(h>0)
            print_value(h);
        else
            break;
    }
    return 0;
}