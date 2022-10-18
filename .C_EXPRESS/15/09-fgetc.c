#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    int c;

    fp = fopen("sample.txt", "r");
    if (fp = NULL)
        printf("Failed to open file\n")
    else
        printf("File Open Successful\n")
    while((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }
    fclose(fp);
    printf("\n");
    
    return 0;
}