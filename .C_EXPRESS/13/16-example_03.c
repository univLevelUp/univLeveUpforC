#include <stdio.h>
#define SIZE 100
struct mail
{
    char title[SIZE];
    char sender[SIZE];
    char receiver[SIZE];
    char content[SIZE];
    char data[SIZE];
    int pri;
};

int main(void)
{
    struct mail m;
    strcpy(m.title, "Regards mail");
    strcpy(m.sender, "chulsoo@hankuk.ac.kr");
    strcpy(m.receiver, "hsh@hankuk.ac.kr");
    strcpy(m.content, "Hello? How are you?");
    strcpy(m.data, "2010/9/1");
    m.pri = 1;

    printf("Title: %s\n", m.title);
    printf("Sender: %s\n", m.sender);
    printf("Receiver: %s\n", m.receiver);
    printf("Content: %s\n", m.content);
    printf("Data: %s\n", m.data);
    printf("pri: %d\n", m.pri);
    
    return 0;
}