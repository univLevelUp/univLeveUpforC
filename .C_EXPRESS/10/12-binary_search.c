#include <stdio.h>
#define SIZE 16
int binary_search(int list[], int n, int key);

int main(void)
{
    int key;
    int grade[SIZE] = {2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47};

    printf("Enter a value to explore: ");
    scanf("%d", &key);
    printf("Search results = %d\n", binary_search(grade, SIZE, key));
    return 0;
}

int binary_search(int list[], int n, int key)
{
    int low, high, middle;

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        printf("[%d %d]\n", low, high);
        middle = (low + high) / 2;
        if (key == list[middle])
            return middle;
        else if ( key > list[middle])
            low = middle + 1;
        else 
            high = middle - 1; 
    }
    return -1;
}