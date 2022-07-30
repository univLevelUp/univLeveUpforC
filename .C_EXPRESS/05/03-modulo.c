#include <stdio.h>

int main(void)
{ 
    const int SEC_PER_MINUTE = 60;
    int input, minute, second;

    printf("Please enter seconds: ");
    scanf("%d", &input);

    minute = input / SEC_PER_MINUTE;
    second = input % SEC_PER_MINUTE;

    printf("%d seconds is %d minutes and %d seconds.", input, minute, second); 

    return 0;
}