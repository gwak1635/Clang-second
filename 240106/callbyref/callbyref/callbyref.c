#include<stdio.h>

void move(int* xpos, int* ypos);

int main() {
	
	int x = 10;
	int y = 20;

	printf("현재 위치 (%d, %d)\n", x, y);
	move(&x, &y);
	printf("현재 위치 (%d, %d)\n", x, y);

	return 0;
}

void move(int* xpos, int* ypos) {
	(*xpos)++; (*ypos)++;
}