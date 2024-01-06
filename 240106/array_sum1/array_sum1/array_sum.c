#include<stdio.h>

int get_sum(int array[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return sum;
}

int main() {
	int a[] = { 10,20,30,40,50 };
	int size = sizeof(a) / sizeof(int);
	int sum = get_sum(a,size);
	printf("%d", sum);

	return 0;
}