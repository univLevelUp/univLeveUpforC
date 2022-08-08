#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    int i = 0;
    while (i<5) 
    {
        printf("Please enter a value: ");
        scanf("%d", &n);
        sum += n;
        i++;
    }
    printf("The total is %d.\n", sum);

    return 0;
}