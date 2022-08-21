#include <stdio.h>

int check_alpha(char ch);

int main(void)
{
    char ch;
    printf("char: ");
    ch = getchar();
    check_alpha(ch);
    return 0;
}
int check_alpha(char ch)
{
    if (ch >= 'a' && ch <= 'z'){
        printf("%c is alphabet", ch);
        return 1;
    }
    else
        printf("%c is not alphabet", ch);
    return 0;
}
