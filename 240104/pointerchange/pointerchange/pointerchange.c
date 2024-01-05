#include<stdio.h>

int main() {

	int x = 100;
	int y = 200;

	int* p;

	p = &x;
	printf("p의 값 = %p\n", p);
	printf("*p의 값 = %d\n", *p);

	p = &y;
	printf("p의 값 = %p\n", p);
	printf("*p의 값 = %d\n", *p);
}