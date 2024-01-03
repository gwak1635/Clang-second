#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>

#define WIDTH 50
#define HEIGHT 50

HWND hwnd;
HDC hdc;

void clear() {
	Rectangle(hdc, 0, 0, 1000, 1000);
}

void gotoxy(int x, int y) {
	COORD coord = { 0,0 };
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawme(int x, int y) {
	Rectangle(hdc, x, y, x + WIDTH, y + HEIGHT);
}

void drawenemy(int x, int y) {
	Ellipse(hdc, x, y, x + WIDTH, y + HEIGHT);
}

int check(int x1, int x2, int y1, int y2) {
	if ((x1 + WIDTH) < x2 || (x2 + WIDTH) < x1){
		return 0;
	}
	if ((y1 + HEIGHT) < y2 || (y2 + HEIGHT) < y1) {
		return 0;
	}
}

int main() {

	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	int isPlaying = 1;
	int me_x, me_y, enemy_x, enemy_y;
	int score = 0;
	int keyboard;

	me_x = 100;
	me_y = 100;

	enemy_x = rand() % 300;
	enemy_y = rand() % 300;

	while (isPlaying) {
		clear();
		gotoxy(1, 1);
		printf("현재 점수 = %d", score);
		drawme(me_x, me_y);
		drawenemy(enemy_x, enemy_y);
		if (check(me_x, enemy_x, me_y, enemy_y)) {
			score++;
			enemy_x = rand() % 300;
			enemy_y = rand() % 300;
			continue;
		}
		keyboard = _getch();
		switch (keyboard)
		{
		case 72:
			me_y -= 10;
			break;
		case 75:
			me_x -= 10;
			break;
		case 77:
			me_x += 10;
			break;
		case 80:
			me_y += 10;
			break;
		case 27:
			isPlaying = 0;
			break;
		}
	}



	return 0;
}