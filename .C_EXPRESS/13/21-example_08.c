#include <stdio.h>

struct point
{
    int x, y;
};

struct circle
{
    struct point center;
    double radius
};

double area(struct circle c);
double perimeter(struct circle c);

int main(void)
{
    struct circle c;
    c.center.x = 0;
    c.center.y = 0;
    c.radius = 10;

    printf("circle center: %d %d\n", c.center.x, c.center.y);
    printf("circle radius: %lf \n", c.radius);
    printf("circle area: %lf, circle perimeter: %lf", area(c), perimeter(c));

    return 0;
}

double area(struct circle c)
{
    return 3.14 * c.radius * c.radius;
}
double perimeter(struct circle c)
{
    return 3.14 * c.radius * 2;
}