#include <Windows.h>
#include <stdio.h>

HWND hwnd;
HDC hdc;
int main() {
	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	int x = 50;
	int y = 50;

	for (int i = 0; i < 5; i++)
	{
		Ellipse(hdc, x, y, x+30, y+30);
		x += 100;
	}
	getchar();

	system("pause");

	return 0;
}