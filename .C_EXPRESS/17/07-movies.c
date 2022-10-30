#include <stdio.h>
#include <stdlib.h>

typedef struct movie
{
    char title[100];
    double rating;
}MOVIE;

int main(void)
{
    MOVIE *movies;
    int size, i;

    printf("How many copies do you want to save?");
    scanf("%d", &size);
    getchar();

    movies (MOVIE *)malloc(sizeof(MOVIE) * size);
    
    if(movies == NULL)
    {
        printf("Dynamic memory assignment error")
        exit(1);
    }

    for(i = 0; i < size; i++)
    {
        printf("Movie Title: ");
        gets_s(movies[i].title, 100);

        printf("Movie Rating: ");
        scanf("%lf", &movies[i].rating);
        getchar();
    }
    
    printf("==================================\n");
    printf("Title    Rating\n");
    printf("==================================\n");
    
    for(i = 0; i<size; i++)
        printf("%s \t %f", movies[i].title, movies[i].rating);
    printf("==================================\n");
    free(movies);

    return 0;
}