#include<math.h>
#include<stdio.h>
#include<Windows.h>

#define PI 3.141592

HWND hwnd;
HDC hdc;

double rad(double angle) {
	return PI * angle / 180;
}

int main() {

	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	for (int i = 0; i <= 100; i++)
	{
		SetPixel(hdc, 30, 30 + i, RGB(255, 255, 255));
	}

	for (int angle = 0; angle <= 360; angle++)
	{
		SetPixel(hdc, 30+angle, 130, RGB(255, 255, 255));
		SetPixel(hdc, 30 + angle, (130 + sin(rad(angle)) * -100), RGB(0, 255, 0));
	}

	getchar();
}