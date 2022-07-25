// 116p, 사용자로 이력받은 2개이 정수의 합을 계산하여 출력 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void)
{
    int x,y, sum;
    

    printf("first  : ");
    scanf("%d", &x); // <--- "%,&"
    printf("sceond : ");
    scanf("%d", &y);
    
    sum=x+y; // <---- 
    printf("sum is %d\n", sum); 

    return 0;
}