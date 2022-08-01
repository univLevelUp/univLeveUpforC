#include <stdio.h>

int main(void)
{
    unsigned int num;

    printf("10number: ");
    scanf("%u", &num);

    unsigned int mask = 1 << 7; //(1<<7 == 00000001을 10000000로 옮김)
    printf("2 number: ");

    ((num & mask) == 0) ? pirntf("0") : printf("1"); 
    mask = mask >>1; 
    ((num & mask) == 0) ? pirntf("0") : printf("1"); 
    mask = mask >>1;
    ((num & mask) == 0) ? pirntf("0") : printf("1"); 
    mask = mask >>1;
    ((num & mask) == 0) ? pirntf("0") : printf("1"); 
    mask = mask >>1;
    ((num & mask) == 0) ? pirntf("0") : printf("1"); 
    mask = mask >>1;
    ((num & mask) == 0) ? pirntf("0") : printf("1"); 
    mask = mask >>1;
    ((num & mask) == 0) ? pirntf("0") : printf("1"); 
    mask = mask >>1;
    pritnf("\n");

    return 0;
}