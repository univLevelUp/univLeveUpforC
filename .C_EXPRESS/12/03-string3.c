#include <stdio.h>

int main(void)
{
    char src[] = "The wors things to eat before you sleep";

    char dst[100];
    int i;
    printf("Source string =%s\n", src);
    for(i = 0; src[i] != '\0'; i++)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    printf("Copied String =%s\n", dst);
    return 0;
}