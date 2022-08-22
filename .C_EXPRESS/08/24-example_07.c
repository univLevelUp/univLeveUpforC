#include <stdio.h>

int get_tax(int income)
{
    if (income > 1000)
        return (80 + 0.1 * (income -1000));
    else
        return income * 0.08;
}
int main(void)
{
    int income;
    printf("income: ");
    scanf("%d", &income);
    printf("income tax: %d", get_tax(income));
    return 0;
}