#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list;
    int i, students;

    printf("Number of students:");
    scanf("%d", &students);
    list = (int *)malloc(3*sizeof(int));
    if(list == NULL)
    {
        printf("Dynamic memory allocation error\n");
        exit(1);
    }
    
    for(i = 0; i < students; i++)
    {
        printf("Student #%d grades: ", i+1);
        scanf("%d", &list[i]);
    }
    printf("=============================\n")
    for(i = 0; i <students; i++)
    {
        printf("Student #%d Grades: %d\n", i+1, list[i]);
    }
    printf("=============================\n")
    free(list);
    
    return 0;
}