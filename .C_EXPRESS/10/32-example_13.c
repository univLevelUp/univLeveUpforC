#include <stdio.h>

int main(void)
{
    int i, n;
    int binary[] = {0};
    n = 32;
    for(i = 0; i< 32 && n > 0; i++)
    {
        binary[i] = n % 2;
        n = n / 2;
    }
    printf("%d", binary[i]);
    return 0;
}