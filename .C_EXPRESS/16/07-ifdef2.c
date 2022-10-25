#include <stdio.h>
#define LINUX

int main(void)
{
#ifdef LINUX
    printf("Linux version.\n");
#else
    printf("Windows version.\n");
#endif
    return 0;
}