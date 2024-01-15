#include<stdio.h>

typedef struct point {
	int x;
	int y;
} POINT;

POINT translate(POINT a, POINT delta);

int main() {

	POINT p = { 2,3 };
	POINT delta;
	POINT result;

	printf("현재 좌표 : (%d, %d)\n", p.x, p.y);
	printf("평행이동할 거리를 입력하시오(x방향, y방향): ");
	scanf_s("%d %d", &delta.x, &delta.y);

	result=translate(p, delta);
	
	printf("새로운 점의 좌표는(%d, %d)입니다.\n", result.x, result.y);

	return 0;
}

POINT translate(POINT a, POINT delta) {
	POINT result;
	result.x = a.x + delta.x;
	result.y = a.y + delta.y;
	return result;
}