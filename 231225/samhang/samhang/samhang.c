#include<stdio.h>

int main() {
	int a, b;
	printf("첫 번째 수 = ");
	scanf_s("%d", &a);
	printf("두 번째 수 = ");
	scanf_s("%d", &b);

	printf("큰 수=%d",(a>b)? a:b );
	printf("작은 수=%d",(a>b)?b:a );
}