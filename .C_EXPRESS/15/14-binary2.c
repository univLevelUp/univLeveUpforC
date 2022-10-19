#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int buffer[SIZE];
    FILE *fp = NULL;

    fp = fopen("binary.bin", "rb");
    if(fp == NULL)
    {
        fprintf(stderr, "Unable to open binary.bin file.");
        return 1;
    }
    fread(buffer, sizeof(int), SIZE, fp);

    for(i = 0; i < SIZE; i++)
        printf("%d ", buffer[i]);
    printf("\n");

    fclose(fp);

    return 0;
}