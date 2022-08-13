int main(void)
{
   char op, op2;

    printf("********************\n");
    printf("A---- ADD\n");
    printf("S---- subtract\n");
    printf("M---- Multiply\n");
    printf("D---- Divide\n");
    printf("Q---- Quit\n");

   do
   {
    printf("op: ");
    scanf("%c", &op);
        if(op == 'Q')
            break;
        else if (op=='A')
            break;
        else if (op=='S')
            break;
        else if (op=='M')
            break;
        else if (op=='D')
            break;
   } while (1);

    int x, y; 

    printf("X, Y: ");
    scanf("%d %d", &x, &y);

    if(op == 'A')
    {
        printf("%d", x + y);
    }
    else if (op == 'S')
    {
        printf("%d", x-y);
    }
    else if (op == 'M')
    {
        printf("%d", x * y);
    }
    else if (op == 'D')
    {
        printf("%d", x / y);
    }    
    return 0;
}