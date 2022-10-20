#include <stdio.h>

int main(void)
{
    if(remove("sample.txt" == -1))
        printf("Unable to delete sample.txt.\n");
    else
        printf("Deleted sample.txt.\n");
    return 0;
}+++++