#include <stdio.h>

void display(const int* xpos, const int* ypos);
void move(int* xpos, int* ypos);

int main() {
	int x = 10;
	int y = 20;

	display(&x, &y);
	move(&x, &y);
	display(&x, &y);

	return 0;
}

void display(const int* xpos, const int* ypos) {
	//*xpos=11 에러 발생
	printf("현재의 위치(%d, %d)\n", *xpos, *ypos);
}

void move(int* xpos, int* ypos) {
	(*xpos)++; (*ypos)++;
}