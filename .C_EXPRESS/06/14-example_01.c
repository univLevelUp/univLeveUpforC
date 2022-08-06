#include <stdio.h>

int main(void)
{
    char ch;
    
    printf("Please enter characters: ");
    ch = getchar();

    switch (ch)
    {
    case 'a':
        printf("It's a vowel.\n");
        break;
    case 'e':
        printf("It's a vowel.\n");
        break;
    case 'i':
        printf("It's a vowel.\n");
        break;
    case 'o':
        printf("It's a vowel.\n");
        break;
    case 'u':
        printf("It's a vowel.\n");
        break;
    default:
        printf("It's a consonant.\n");
        break;
    }
    
    return 0;
}