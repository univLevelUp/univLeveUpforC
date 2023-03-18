#include <stdio.h>
#include <string.h>

int ConvToInt(char c)
{
    static int diff = 1 - '1';
    return c + diff;
}

int main(void)
{
    char str[50];
    int len, i;
    int sum = 0;

    printf("문자열 입력: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        if('1' <= str[i] && str[i] <= '9')
            sum += ConvToInt(str[i]);
    }
    printf("숫자의 총 합: %d \n", sum);
    return 0;
}