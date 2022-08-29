#include <stdio.h>
#include <stdlib.h>

void init();

int main(void)
{
    init();
    init();
    init();
    return 0;
}
void init()
{
    static int inited = 0;
    
    if (inited == 0)
    {
        printf("init(): initialization");
        inited = 1;
    }
    else
    {
        printf("Since it has already been initialized, we will not initialize it.");
        
    }
}