#include <windows.h>
#include <stdio.h>

int main(void)
{
    HDC hdc = GetWindowDC(GetForegroundWindow());

    int i;
    for (i = 0; i < 100; i++)
    {
        int x = rand() % 500;
        int y = rand() % 300;
        int w = rand() % 100;
        int h = rand() % 100;
        Rectangle(hdc, x, y, x + w, y + h);
        Sleep(100);
    }
    return 0;
}