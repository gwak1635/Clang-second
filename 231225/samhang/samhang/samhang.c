#include<stdio.h>

int main() {
	int a, b;
	printf("ù ��° �� = ");
	scanf_s("%d", &a);
	printf("�� ��° �� = ");
	scanf_s("%d", &b);

	printf("ū ��=%d",(a>b)? a:b );
	printf("���� ��=%d",(a>b)?b:a );
}