#include<stdio.h>

int main() {

	int limit;
	
	printf("ÃÖ´ë ¼ö: ");
	scanf_s("%d", &limit);

	for (int a = 1; a < limit; a++)
	{
		for (int b = a; b < limit; b++) {
			for (int c = 1; c < limit; c++) {
				if (a * a + b * b == c * c) {
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}
}