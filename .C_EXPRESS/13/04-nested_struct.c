#include <stdio.h>

struct point
{
    int x;
    int y;
};
struct  rect 
{
    struct point p1;
    struct point p2;
};

int main(void)
{
    struct rect r;
    int w, h, area, peri;

    printf("Enter coordinates in the upper left corner: ");
    scanf("%d %d", &r.p1.x, &r.p1.y);
    
    printf("Enter coordinates in the upper right corner:");
    scanf("%d %d", &r.p2.x, &r.p2.y);
    
    w = r.p2.x - r.p1.x;
    h = r.p2.x - r.p1.x;

    area = w * h;
    peri = 2 * w + 2 * h;
    printf("area: %d, peri: %d", area, peri);

    return 0;
}
