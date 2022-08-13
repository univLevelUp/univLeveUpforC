#include <stdio.h>

int main(void)
{
    int h;

    while (1)
    {
        printf("\n");
        printf("The height of the bar?");
        scanf("%d", &h);
        for(int i=1; i<=h; i++)
    {
            printf("*");
    }
            if(h == -1)
            break;
    }

    return 0;
}