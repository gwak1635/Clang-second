#include<stdio.h>
int main() {
	int i = 10;
	int* p = &i;

	printf("i�� �� = %d\n", i);
	printf("i�� �ּ� = %p\n", &i);

	printf("p�� �� = %p\n", p);
	printf("*p�� �� = %d\n", *p);
}