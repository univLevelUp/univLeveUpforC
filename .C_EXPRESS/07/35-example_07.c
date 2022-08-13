#include <stdio.h>

int main(void)
{
    int i, x;
    for (i = 2; i <= 100; i++)
    {
        for (x = 2; x < i; x++)
        {
            if (i % x == 0)
                break;
        }
        if (i == x)
            printf("%d ", i);
    }
    return 0;
}