#include<stdio.h>

int main() {
	int x;
	int avg = 0;
	for (int i = 0; i < 3; i++)
	{
		printf("정수를 입력하세요: ");
		scanf_s("%d", &x);
		avg += x;
	}
	avg /= 3;
	printf("평균값은 %d입니다.", avg);
	return 0;
}