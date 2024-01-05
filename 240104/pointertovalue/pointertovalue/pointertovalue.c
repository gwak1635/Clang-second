#include<stdio.h>
int main() {
	int i = 10;
	int* p = &i;

	printf("i의 값 = %d\n", i);
	printf("i의 주소 = %p\n", &i);

	printf("p의 값 = %p\n", p);
	printf("*p의 값 = %d\n", *p);
}