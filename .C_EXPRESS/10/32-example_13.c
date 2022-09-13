#include <stdio.h>

int main(void)
{
    int i, n;
    int binary[32] = {0};
    n = 32;
    
    for(i = 0; i< 32 && n > 0; i++)
    {
        binary[i] = n % 2;
        n = n / 2;
    }
    for(i = 31; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
printf("\n");
    return 0;
}