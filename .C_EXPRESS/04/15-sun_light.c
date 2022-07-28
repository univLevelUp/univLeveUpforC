//162p 빛이 도달하는 시간 
#include <stdio.h>

int main(void)
{
    double light_spped =30000;
    double distance = 149600000;
    double time;

    time = distance / light_spped; 

    printf("light speed: %lfkm/s\n", light_spped);
    printf("The distance between the sun and the earth is %lfkm\n", distance);
    printf("The arrival time is %lf\n", time);    

    return 0;
}