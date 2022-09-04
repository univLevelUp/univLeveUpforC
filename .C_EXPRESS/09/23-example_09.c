#include <stdio.h>

int get_digit_sum(n);
int main(void)
{
    int input;
    printf("int: ");
    scanf("%d", &input);
    printf("number of digits sum: %d", get_digit_sum(input));
    return 0;
}

int get_digit_sum(n)
{
    if(n != 0)
        return (n % 10) + get_digit_sum(n / 10);
    else
        return 0;
}