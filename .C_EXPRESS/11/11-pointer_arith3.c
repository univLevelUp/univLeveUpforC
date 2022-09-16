#include <stdio.h>

int main(void)
{
    int data = 0x0a0b0c0d;
    char *pc;

    pc = (char *)&data; //
    for (int i = 0; i <4; i++)
    {
        printf("*(pc + %d) = %02X \n", i, *(pc + i));
    }
    return 0;
}