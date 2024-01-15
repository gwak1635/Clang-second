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

	printf("���� ��ǥ : (%d, %d)\n", p.x, p.y);
	printf("�����̵��� �Ÿ��� �Է��Ͻÿ�(x����, y����): ");
	scanf_s("%d %d", &delta.x, &delta.y);

	result=translate(p, delta);
	
	printf("���ο� ���� ��ǥ��(%d, %d)�Դϴ�.\n", result.x, result.y);

	return 0;
}

POINT translate(POINT a, POINT delta) {
	POINT result;
	result.x = a.x + delta.x;
	result.y = a.y + delta.y;
	return result;
}