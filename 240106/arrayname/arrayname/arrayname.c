#include<stdio.h>

int main() {
	int a[] = { 10,20,30,40 };

	printf("&a[0] = %p\n", &a[0]);
	printf("&a[1] = %p\n", &a[1]);
	printf("&a[2] = %p\n", &a[2]);

	printf("a = %p\n", a);

	printf("*a= %d\n", *a);
	printf("*(a+1)= %d\n", *(a + 1));
	printf("*(a+2)= %d\n", *(a + 2));

	return 0;
}