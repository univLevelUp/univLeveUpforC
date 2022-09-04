#include <stdio.h>

int recursive(int n, int k);

int main(void)
{
    int n, k;
    printf("n=");
    scanf("%d", &n);
    printf("k=");
    scanf("%d", &k);
    printf("%d", recursive(n, k));
    return 0;
}

int recursive(int n, int k)
{
    if(0 < k && k < n && 0 < n)
        return recursive(n - 1, k - 1) + recursive (n - 1, k);
    else
        return 1;
}