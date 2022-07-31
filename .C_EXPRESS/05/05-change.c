#include <stdio.h>

int main(void)
{
 int user, change = 0;
 int price, c5000, c1000, c500, c100;

 printf("Please enter a value for the item: ");
 scanf("%d", &price);

 printf("User paid: ");
 scanf("%d", &user);
change = user - price;

c5000 = change / 5000;
change = change % 5000;

c1000 = change / 1000;
change = change %1000;

c500 = change / 500;
change = change % 500;

c100 = change / 100;
change = change % 100;

printf("5000won: %d\n", c5000);
printf("1000won: %d\n", c1000);
printf("500won: %d\n", c500);
printf("100won: %d\n", c100);
    return 0;
}