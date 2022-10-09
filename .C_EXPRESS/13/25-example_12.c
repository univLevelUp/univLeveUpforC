#include <stdio.h>
#include <math.h>

enum shape_type
{
    tri, rect, cir
};
struct shape
{
    int type;
    
    union
    {
        struct 
        {
            int b, h;
        }tri;
        struct
        {
            int w, h;
        }rect;
        struct
        {
            int r;
        }cir;
    }
    p;
};

int mnain(void)
{
    struct shape s;
    enum shape_type type;
    printf("shape type?(0, 1, 2)");
    scanf("%d", &type);

    switch(type)
    {
        case tri:
            printf("b, h: ");
            scanf("%d %d", &s.p.tri.b, &s.p.tri.h);
            printf("area: %d\n", (int)(0.5 * s.p.tri.b * s.p.tri.h));
            break;
        case rect:
            printf("w, h:");
            scanf("%d %d", &s.p.rect.w, &s.p.rect.h);
            printf("area: %d\n", (int)(s.p.rect.w * s.p.rect.h));
            break;
        case cir:
            printf("r");
            scanf("%d", &s.p.cir.r);
            printf("area %d\n",(int)(3.14 * s.p.cir.r * s.p.cir.r));
            break;
    }
}