#include<stdio.h>
int main() {
	int x = 10, y = 10;
	int result;

	result = ++x;
	printf("++x�� �� = %d", result);

	result = y++;
	printf("y++�� �� = %d", result);

	return 0;
}