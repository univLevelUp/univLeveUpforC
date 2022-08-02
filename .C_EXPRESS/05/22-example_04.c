#include <stdio.h>

int main(void)
{
    int height, ft;
    double inch;
    
    printf("Enter height (cm): ");
    scanf("%d", &height);

    inch = height / 2.54;
    ft = (double)inch / 12;

    printf("%d is %dft %finch.", height, ft, inch);

    return 0;
}