#include <stdio.h>

int main() {
	long fact = 1;

	int input;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &input);

	for (int i = 1; i <= input; i++)
	{
		fact *= i;
	}


	printf("%d!는 %d이다.", input, fact);
}