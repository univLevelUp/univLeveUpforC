#include <stdio.h>

int main(void)
{
    int average, kor, eng, math;
    printf("��������: ");
    scanf("%d", &kor);
    printf("��������: ");
    scanf("%d", &eng);
    printf("��������: ");
    scanf("%d", &math); 

    average = (kor + eng + math) / 3;

    if(average >= 90)
        printf("grade: A");
    else if(average >= 80)
        printf("grade: b");
    else if(average >= 70)
        printf("grade: C");
    else if(average >= 60)
        printf("grade: D");
    else
        printf("grade: F");
    return 0;
}