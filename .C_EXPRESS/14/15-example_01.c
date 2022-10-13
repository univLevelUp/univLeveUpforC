#include <stdio.h>

void set_proverb(char **q, int n)
{
    static char *array[9] = {
        "A bad shearer naver had a good sickle.",
        "A bad work man (always) blames his tools.",
        "A bad workman quarrels with his tools.",
        "A bad thing never dies.",
        "Love begets love.",
        "Lovers are fools.",
        "No house without a mouse.",
        "Power is dangerous unless you have humility.",
        "Office changes manners.",
        "Empty vessels make the most sound."
    }; 
    *q= array[n];
}

int main(void)
{
    char *p = NULL;
    int c;
    printf("Which proverb do you want to choose?");
    scanf("%d", &c);

    set_proverb(&p, c);
    printf("selected proverb = %s\n", p);

    return 0;
}