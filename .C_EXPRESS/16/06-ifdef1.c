#include <stdio.h>
#define DELUXE

int main(void)
{
#ifdef DELUXE
    printf("It's a Delix version.\n");
#endif
    return 0;
}