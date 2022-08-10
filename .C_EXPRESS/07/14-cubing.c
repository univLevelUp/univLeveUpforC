#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter int: ");
    scanf("%d", &n);
    
    printf("===============\n");
    printf("    i    i^3\n");
    printf("===============\n");

    for(int i = 1; i <= n; i++)
        printf("%5d %5d\n", i, i*i*i);
    
    return 0;
}