#include <stdio.h>
//# define one square meter 3.3058
int main (void)
{
    int pyeong;
    const double one_square_meter = 3.3058;
    
    printf("Please enter a review: ");
    scanf("%d", &pyeong);
    
    printf("It's %f square meters.", pyeong*one_square_meter);
    
    return 0;
}