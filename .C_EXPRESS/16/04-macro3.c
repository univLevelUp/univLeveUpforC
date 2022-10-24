#include <stdio.h>

#define ASSERT(exp) {if (!(exp)) \
        {printf("Assumption ("#exp") failed in the source file %s %d line\n"\
        ,__FILE__, __LINE__), exit(1);}}

int main(void)
{
    int sum = 100;

    ASSERT(SUM == 0);
    return 0;
}