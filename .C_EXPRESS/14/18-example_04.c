#include <stdio.h>

void pr_str_array(char **dp, int n);

int main(void)
{
	char *array[10]=
    {
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
	
    pr_str_array(array, 10);

	return 0;
}

void pr_str_array(char **dp, int n)
{
	int i;
	for (i=0;i<n;i++)
    {
		printf("%s\n", dp[i]);
	}
}
