#include<stdio.h>

int isPrime(int number);

int main() {

	int nA;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &nA);

	isPrime(nA) ? printf("%d is prime number", nA) : printf("%d isn't prime number", nA);

	return 0;
}

int isPrime(int number) {
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			return 0;
	}
	return 1;
}