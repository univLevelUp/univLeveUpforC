#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    fp = fopen("sample.txt", "w");
    if(fp = NULL)
        printf("Failed to open file\n");
    else
        printf("File Open Successful\n");
    fclose(fp);

    return 0;
}