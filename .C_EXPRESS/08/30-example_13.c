#include <stdio.h>

int is_multiple(int n, int m)
{
    if (n % m == 0)
        return 1;
    else
        return 0;
}
int main(void)
{
    int f, s;
    printf("frist int: ");
    scanf("%d", &f);
    printf("second int: ");
    scanf("%d", &s);
    
        if(is_multiple(f, s) == 1)
            printf("multiple");
        else
            printf("not multiple");
    return 0;
}