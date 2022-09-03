#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_dice_face();

int main(void)
{
    srand(time(NULL));
    get_dice_face();
    return 0;
}

int get_dice_face()
{
    static int n_1 = 0, n_2 = 0, n_3 = 0, n_4 = 0, n_5 = 0, n_6 = 0;
    int num;
    while(1){
        num = rand() % 6;
        if (n_1 + n_2 + n_3 + n_4 + n_5 + n_6 == 100)
            break;    
        else if (num == 0) 
            n_1++;
        else if (num == 1)
            n_2++;
        else if (num == 2)
            n_3++;
        else if (num == 3)
            n_4++;
        else if (num == 4)
            n_5++;
        else if (num == 5)
            n_6++;  
    }

    printf("1->%d\n", n_1);
    printf("2->%d\n", n_2);
    printf("3->%d\n", n_3);
    printf("4->%d\n", n_4);
    printf("5->%d\n", n_5);
    printf("6->%d\n", n_6);
}