#include <stdio.h>

int is_leap(int year)
{
    if((year % 4 == 0 && year % 100 !=0)|| year % 400 == 0)
        printf("leapyear (366day)");
    else 
        printf("not leapyear (365day)");
}
int main(void)
{
    int y;
    printf("year ?: ");
    scanf("%d", &y);
    is_leap(y);
    
    return 0;
}