#include<math.h>
#include<stdio.h>

struct point {
	int x;
	int y;
};

int main() {

	struct point p1;
	struct point p2;
	double xdis;
	double ydis;
	double distance;

	printf("ù ��° ���� ��ǥ: ");
	scanf_s("%d %d", &p1.x, &p1.y);
	printf("�� ��° ���� ��ǥ: ");
	scanf_s("%d %d", &p2.x, &p2.y);
	
	xdis = (double)(p1.x - p2.x);
	ydis = (double)(p1.y - p2.y);
	distance = sqrt(xdis * xdis + ydis * ydis);
	
	printf("�Ÿ��� %f�Դϴ�.", distance);
}