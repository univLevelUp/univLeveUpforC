#include <stdio.h>
#include <string.h>
#define WORDS 5

int main(void)
{
    int i, index;
    char dic[WORDS][2][30]= {
        {"book", "책"},
        {"boy", "소년"},
        {"computer", "컴퓨터"},
        {"lanuguage", "언어"},
        {"rain", "비"}
    };
    char word[30];
    printf("word: ");
    scanf("%s", word);
    
    index = 0;
    for (i = 0; i < WORDS; i++)
    {
        if(strcmp(dic[index][0], word) == 0){
        printf("%s: %s\n", word, dic[index][1]);
        return 0;
        }
        index ++;
    }
    printf("no reamin");
    return 0;
}