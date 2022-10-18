#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char fname[128];
    char buffer[256];
    char word[256];
    int line_num = 0;

    printf("Enter input file name day: ");
    scanf("%s", fname);

    printf("Type the word you want to search for:");
    scanf("%s", wrod);

    if((fp = fopen(fname, "r")) == NULL)
    {
        printf(stderr, "Unable to open source file %s.\n", fname);
        exit(1);
    }

    while(fgets(buffer, 256, fp))
    {
        line_num++;
        if(strstr(nuffer, word))
            printf("%s: %d word %s found.\n", fname, line_num, word);
    }
    fclose(fp);

    return 0;
}