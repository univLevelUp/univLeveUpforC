#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    fp = fopen("sample.txt", "w");
    if (fp = NULL)
        printf("Failed to open file\n")
    else
        printf("File Open Successful\n")
    fputc('a', fp);
    fputc('b', fp);
    fputc('c', fp);
    fclose(fq);
    
    return 0;
}