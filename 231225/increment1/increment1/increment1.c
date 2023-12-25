#include<stdio.h>
int main() {
	int x = 10, y = 10;
	int result;

	result = ++x;
	printf("++x의 값 = %d", result);

	result = y++;
	printf("y++의 값 = %d", result);

	return 0;
}