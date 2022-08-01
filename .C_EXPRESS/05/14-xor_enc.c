#include <stdio.h>

int main(void)
{
    char data = 'a';
    char key = 0xff;
    
    char encrpted_data;
    encrpted_data = data ^ key;

    printf("encrypted characters: %c\n", encrpted_data);

    char orig_data;
    orig_data = encrpted_data ^ key;
    printf("orig_data: %c\n", orig_data);
    return 0;
}