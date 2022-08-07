#include <stdio.h>

int main(void)
{
    double height, weight, standard;

    printf("Please enter your weight and height: ");
    scanf("%lf%lf", &height, &weight);
    
    standard = (height - 100) * 0.9;

    if (weight == standard)
        printf("It's a standard weight.\n");
    else if (weight > standard)
        printf("It's a overweight.\n");
    else if (weight < standard)
        printf("It's a underweight.\n");
    else
        printf("error\n");    
    return 0;
}