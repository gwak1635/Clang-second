#include <stdio.h>
#include <Windows.h>

HWND hwnd;
HDC hdc;

int main() {
	int x, y;

	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	MoveToEx(hdc, 250, 0, 0);
	LineTo(hdc, 250, 250);
	LineTo(hdc, 500, 250);

	for (x = -250; x <= 250; x++)
	{
		y = (x * x)/100;
		SetPixel(hdc, x + 250, 250 - y, RGB(255, 0, 0));
	}

	getchar();

	return 0;
}