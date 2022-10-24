#include <stdio.h>
#define GET_BIT(w, k) (((w) >> (k)) && 0x01)
#define SET_BIT_ON(w, k) ((w) |= (0x01 << (k)))
#define SET_BIT_OFF(W, K) ((W) &= ~(0X01 << (K)))

int main(void)
{
    int data = 0;
    SET_BIT_ON(data ,2);
    printf("%08X\n", data);
    printf("%d\n", GET_BIT(data, 2));

    SET_BIT_OFF(data, 2);
    printf("%08X\n", data);
    printf("%d\n", GET_BIT(data, 2));
    
    return 0;
}