#include <stdio.h>
#include <math.h>

void menu()
{
    printf("====================\n");
    printf("MENU\n");
    printf("====================\n");
    printf("1. sum\n");
    printf("2. diff\n");
    printf("3. mul\n");
    printf("4. div\n");
    printf("5. mod\n");
}

int sum(int x, int y) {
    return x + y;
}
int diff(int x, int y) {
    return x - y;
}
int mul(int x, int y) {
    return x * y;
}
int div(int x, int y) {
    return x / y;
}
int mod(int x, int y) {
    return x % y;
}

int main(void)
{
    int number_1, number_2;
    char op, con;
    int result;
    meun();
    while (1)
    {
        printf("Please select a menu: ");
        scanf("%c", &op);
        printf("int: ");
        scanf("%d", &number_1);
        printf("int: ");
        scanf("%d", &number_2);
            if (op == 1){
                result = sum(number_1, number_2);
            }
            else if (op == 2){
                result = diff(number_1, number_2);
            }
            else if (op == 3){
                result = mul(number_1, number_2);
            }
            else if (op == 4){
                result = div(number_1, number_2);
            }
            else if (op == 5){
                result = mod(number_1, number_2);
            }
        printf("result: %d\n", result);
        printf("Press 'y' to continue\n");
        scanf("%c", &con);
            if(con == 'y')
                continue;
            else
                break;
    }
    return 0;
}