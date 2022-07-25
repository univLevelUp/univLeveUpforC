//111p 사칙연산
#include <stdio.h>
int main(void)
{
int x, y, sum, diff, mul, div; 

x=20, y=10; 
sum = x + y;
diff = x - y;
mul = x * y;
div = x / y; 

printf("x+y: %d\n", sum);
printf("x-y: %d\n", diff);
printf("x*y: %d\n", mul);
printf("x/y: %d\n", div);

return 0;
} 