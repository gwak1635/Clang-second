#include<stdio.h>
#define SUB(X,Y) (X-Y)
#define SQR(X) (X*X)
#define PRT(X) printf("��� ����� %d�Դϴ�.",X);

int main() {
	int result;
	int num1 = 15, num2 = 7;

	result = SUB(num1, num2);
	PRT(result);

	result = SQR(num2);
	PRT(result);

	return 0;
}