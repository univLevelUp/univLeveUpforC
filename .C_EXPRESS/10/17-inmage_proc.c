#include <stdio.h>

void display(int image[8][16])
{
    for(int r = 0; r < 8; r++){
        for(int c = 0; c < 16; c++){
            if (image[r][c] == 0)
                printf("*");
            else
                printf("_");
        }
        printf("\n");
    }
}
void inverse(int img[8][16])
{
    for(int r = 0; r< 8; r++){
        for(int c = 0; c < 16; c++)
        if(img[r][c] == 0)
            img[r][c] = 1;
        else 
            img[r][c] = 0;
    } 
}

int main(void)
{
    int image[8][16] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1},
        {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    printf("before \n");
    display(image);
    inverse(image);
    printf("\n\nafter \n");
    display(image);
    return 0;
    }