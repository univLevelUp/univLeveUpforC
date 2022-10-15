#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double mile, km;

    if(argc != 2)
    {
        printf("How to use: mile 2km distance\n");
        return 1;
    }
    
    mile = atof(argv[1]);
    km = 1.609 * mile;
    printf("The distance entered is %f km.", km);

    return 0;   
}