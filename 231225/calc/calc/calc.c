#include <stdio.h>

int main() {
	int x, y;
	char op;
	int result;
	printf("������ �Է��Ͻÿ�\n(��: 2 + 5)\n>>");
	scanf_s("%d %c %d", &x, &op,1, &y);
	switch (op)
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		if (y != 0) {
			result = x / y;
		}
		else {
			printf("����: 0���� ���� �� �����ϴ�.");
			return 1;
		}
		break;
	case '%':
		if (y != 0) {
			result = x % y;
		}
		else {
			printf("����: 0���� ���� �� �����ϴ�.");
			return 1;
		}
		break;
	default:
		printf("�������� �ʴ� �������Դϴ�.");
		return 1;
	}

	printf("%d %c %d = %d", x, op, y, result);

	return 0;
}