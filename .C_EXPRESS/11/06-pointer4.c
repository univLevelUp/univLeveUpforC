#include <stdio.h>

int main(void)
{
    int *p = NULL;
    
    if (p != NULL)
        printf("Pointer p is valid");
    else
        printf("The pointer p is not valid");
    return 0;
}
/*int main(void)
{
    int *p;
    
    *p = 100;
    //초기화 하지 않으면 안됨 !
    return 0;
}*/