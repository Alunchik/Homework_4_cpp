#include <iostream>
#include <windows.h>
#include <math.h>


int main()
{
    HDC hdc = GetDC(GetConsoleWindow());
    HPEN pen = CreatePen(PS_SOLID, 3, RGB(255, 0, 0));
    SelectObject(hdc, pen);
    MoveToEx(hdc, 10, 50, NULL);
    LineTo(hdc, 800, 50);
    MoveToEx(hdc, 180, 10, NULL);
    LineTo(hdc, 180, 100);
    double x = 180;
    double y = 50;
    HPEN pen2 = CreatePen(PS_SOLID, 3, RGB(0, 255, 0));
    SelectObject(hdc, pen2);
    MoveToEx(hdc, x, y, NULL);
    int xgrad;
    double pi = 3.1415;
    for (xgrad = 0; xgrad < 3600; xgrad++) {
        double xrad = (xgrad * pi / 180);
        double yizm = sin(xrad);
        LineTo(hdc, x + 10 * xrad, y + 10 * yizm);
    }
    MoveToEx(hdc, 180, 50, NULL);
    for (xgrad = 0; xgrad > -3600; xgrad--) {
        double xrad = (xgrad * pi / 180);
        double yizm = sin(xrad);
        LineTo(hdc, x + 10 * xrad, y + 10 * yizm);
    }
    while (true) {
        Sleep(100000);
    }
}