#include <stdio.h>

int main() {
	long fact = 1;

	int input;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &input);

	for (int i = 1; i <= input; i++)
	{
		fact *= i;
	}


	printf("%d!�� %d�̴�.", input, fact);
}