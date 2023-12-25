#include <stdio.h>

int main() {
	double grade;

	printf("학점을 입력하시오: ");
	scanf_s("%lf", &grade);

	printf("학점이 %lf이시군요! \n", grade);
	return 0;
}