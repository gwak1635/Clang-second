#include<stdio.h>

void check();

int main() {
	int id;
	int pw;
	int count= 0;
	while (1) {
		printf("id: ____\b\b\b\b");
		scanf_s("%d", &id);
		printf("pw: ____\b\b\b\b");
		scanf_s("%d", &pw);
	}
}

void check() {
	printf("È½¼ö ÃÊ°ú");
	exit(1);
}