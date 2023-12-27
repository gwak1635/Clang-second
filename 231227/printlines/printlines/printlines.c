#include <stdio.h>

void print_lines() {
	printf("==========================================\n");
	printf("==========================================\n");
}

int main() {

	print_lines();

	for (int i = 1; i <= 5; i++)
	{
		printf("%dÀÇ Á¦°öÀº %d\n", i, i * i);
	}

	print_lines();

	return 0;
}