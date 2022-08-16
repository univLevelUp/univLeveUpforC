#include <stdio.h>

int max(int x, int y)
{
    if (x > y)
        return x;
    else 
        return y;
}
int main(void)
{
    int x, y;
    printf("int: ");
    scanf("%d", &x);
    printf("int: ");
    scanf("%d", &y);

    int larger;
    larger = max(x, y);
    printf("larger: %d\n", larger);
    return 0;
}