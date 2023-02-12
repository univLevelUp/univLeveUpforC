#include <stdio.h>

int main(void)
{
    int num;
    int result = 1;

    printf("정수를 입력하세요: ");
    scnaf("%d", &num);

    for(int i = 1; i <= num; i++)
        result = result * i;
    printf("%d! = %d", num, result);
    return 0;
}