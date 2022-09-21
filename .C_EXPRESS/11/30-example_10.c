#include <stdio.h>

void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd);

int main(void)
{
    int a, b, l, g;

    printf("two int: ");
    scanf("%d %d", &a, &b);
    get_lcm_gcd(a, b, &l, &g);
    return 0;
}

void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd)
{
    int tmp, x1, y1;
    x1 = x;
    y1 = y;

    while(y != 0)
    {
        tmp = x % y;
        x = y;
        y = tmp;
    }
    *p_gcd = x;
    printf("p_gcd = %d\n", *p_gcd);
    *p_lcm = (x1 * y1) / *p_gcd;
    printf("p_lcm = %d", *p_lcm);
}


