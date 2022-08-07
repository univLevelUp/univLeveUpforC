#include <stdio.h>

int main(void)
{
    char ch;
    
    printf("Enter a letter: ");
    ch = getchar();

    switch (ch){
        case 'r': 
            printf("Rectangle\n");
            break;
        case 'R': 
            printf("Rectangle\n");
            break;
        case 't': 
            printf("Triangle\n");
            break;
        case 'T': 
            printf("Triangle\n");
            break;
        case 'c':
            printf("Circle\n");
            break;
        case 'C':
            printf("Circle\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }
    return 0;
}