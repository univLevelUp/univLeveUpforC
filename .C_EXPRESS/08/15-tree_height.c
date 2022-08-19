#include <stdio.h>
#include <math.h>

int main(void)
{
    double height, distance, tree_hight, degrees, radians;

    printf("tree hight: ");
    scanf("%lf", &distance);

    printf("your height: ");
    scanf("%lf", &height);
    
    printf("degrees: ");
    scanf("%lf", &degrees);

    radians = degrees * (3.141592 / 180.0);
    tree_hight = tan(radians) * distance + height;
    
    printf("tree hight: %lf\n", tree_hight);

    return 0;
}