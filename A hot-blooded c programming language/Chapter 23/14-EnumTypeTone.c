#include <stdio.h>

typedef enum syllable
{
    Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
} Syllable;

void sound(Syllable sy)
{
    switch (sy)
    {
    case Do:
        puts("도는 하얀 도라지"); return;
    case Re:
        puts("레는 둥근 레코드"); return;
    case Mi:
        puts("미는 파란 미나리"); return;
    case Fa:
        puts("파는 예쁜 파랑색"); return;
    case So:
        puts("솔은 작은 솔방울"); return;
    case La:
        puts("라는 라디오"); return;
    case Ti:
        puts("시는 졸졸 시냇물"); return;
    }
    puts("도레미파 솔라시도 솔");
}

int main(void)
{
    Syllable tone;
    for(tone = Do; tone <= Ti; tone+=1)
        sound(tone);
    return 0;
}