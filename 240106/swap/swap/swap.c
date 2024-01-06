#include <stdio.h>
void swap(int* x, int* y);

int main() {
	int a = 100;
	int b = 200;

	printf("swap()호출 전 a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("swap()호출 전 a=%d b=%d\n", a, b);

	return 0;
}

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}