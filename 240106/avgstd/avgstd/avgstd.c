#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void print_data(double data[]) {
	printf("( ");
	for (int i = 0; i < 10; i++)
	{
		printf("%.2lf ", data[i]);
	}
	printf(")\n");
}

double get_mean(double data[]) {
	double sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += data[i];
	}
	return (sum / 10);
}

double get_std(double data[]) {
	double mean = get_mean(data);
	double temp = 0;
	for (int i = 0; i < 10; i++)
	{
		temp += pow(data[i] - mean, 2) / 10;
	}
	return (sqrt(temp));
}

int main() {
	srand((unsigned)time(NULL));
	rand();

	double student[10];

	for (int i = 0; i < 10; i++)
	{
		student[i] = rand() % 101;
	}

	print_data(student);
	printf("평균값은 %lf\n", get_mean(student));
	printf("표준편차값은 %lf\n", get_std(student));
	
}