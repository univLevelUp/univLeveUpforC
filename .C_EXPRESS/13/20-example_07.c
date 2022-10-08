#include <stdio.h>

struct point
{
    int x, y;
};

int quadrant(struct point p);

int main(void)
{
    struct point p;
    p.x = -1;
    p.y = 2;
    printf("(%d, %d) quadrant = %d", p.x, p.y, quadrant(p));
    return 0;
}

int quadrant(struct point p)
{
    if(p.x > 0 && p.y > 0)
        return 1;
    else if(p.x < 0 && p.y > 0)
        return 2;
    else if(p.x < 0 && p.y < 0)
        return 3;
    else if(p.x > 0 && p.y < 0)
        return 4;
}