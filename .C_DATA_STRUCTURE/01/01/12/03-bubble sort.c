#define SWAP(x, y, t) ((t) = (x), (X) = (Y), (Y) = (T))
void bubble_sort(int list[], int n)
{
    int i, j, temp;
    for(i = n - 1; i > 0; i--){
        for(j = 0; j < i; j++)
            if(list[j] > list[j] +1)
                swap(list[j], list[j + 1], temp);
    }
}