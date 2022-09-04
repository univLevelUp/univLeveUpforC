#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void init();

int get_random();

int main(void)
{
    init();
    for(int i=1; i<=3; i++)
    {
    get_random();
    }
    
    return 0;
}

void init()
{
    static int inited = 0;
    srand(time(NULL));
    if (inited == 0)
        printf("Enable initialization\n");
}

int get_random()
{
    int num = rand();
    printf("%d\n", num);
}
