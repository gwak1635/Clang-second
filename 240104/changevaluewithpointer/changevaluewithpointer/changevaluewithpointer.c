#include<stdio.h>


int main() {
	int i = 10;

	int* p = &i;

	printf("i의 값=%d\n", i);

	*p = 20;
	printf("i의 값=%d\n", i);

	return 0;
}