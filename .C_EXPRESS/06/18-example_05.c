#include <stdio.h>

int main(void)
{
    int age;
    double h;
    
    printf("Enter your height: ");
    scanf("%lf", &h);
    
    printf("Enter your age:");
    scanf("%d", &age);

    if(h >= 140 && age >= 10)
        printf("You are welcome to board.");
    else 
        printf("sorry");
        
    return 0;
}