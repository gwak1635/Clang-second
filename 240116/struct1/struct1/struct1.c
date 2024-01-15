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

	struct tagEmployee e = { "홍길동",20150001,"서울시 강남구 1번지" };
}