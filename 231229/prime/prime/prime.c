#include<stdio.h>

int isPrime(int number);

int main() {

	int nA;
	printf("정수를 입력하시오: ");
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