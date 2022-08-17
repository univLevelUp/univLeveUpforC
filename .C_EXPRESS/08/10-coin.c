#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(void);
int main(void)
{
    int toss;
    int heads = 0;
    int tails = 0;
    srand((unsigned)time(NULL));

    for (toss = 0; toss < 100; toss++)
    {
        if(coint_toss()==1)
            heads ++;
        else
            tails++;
    }
    printf("coin front: %d\n", heads);
    printf("coin back: %d\n", tails);
    return 0;
}
int coin_toss(void)
{
    int i = rand() % 2;
    if(i == 0)
        return 0;
    else
        return 1;
}