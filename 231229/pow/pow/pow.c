#include <stdio.h>

int pow(int x, int y);

int main() {
	
	int x, y;
	printf("x^y�� ���� �Է��Ͻÿ�.(����: 2 3)");
	scanf_s("%d %d", &x, &y);

	int result = pow(x, y);
	printf("%d^%d=%d", x, y, result);

}

int pow(int x, int y) {
	if (y >= 1)
		return pow(x, --y) * x;
}