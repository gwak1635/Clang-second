#include <stdio.h>

int main() {

	struct tagSquare {
		int x;
		int y;
		int height;
		int width;
	};

	struct tagEmployee {
		char name[20];
		int number;
		char address[100];
	};

	struct tagEmployee e = { "ȫ�浿",20150001,"����� ������ 1����" };
}