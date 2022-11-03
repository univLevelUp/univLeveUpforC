#include <stdio.h>

int sub(int n)
{
    int result = 0;
    while(n > 0)
    {
        result = result + n;
        n = (n-3);
    }
    return (result);
}

int main(void)
{
    printf("%d", sub(10));
}
