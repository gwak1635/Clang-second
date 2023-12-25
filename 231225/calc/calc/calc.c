#include <stdio.h>

int main() {
	int x, y;
	char op;
	int result;
	printf("수식을 입력하시오\n(예: 2 + 5)\n>>");
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
			printf("에러: 0으로 나눌 수 없습니다.");
			return 1;
		}
		break;
	case '%':
		if (y != 0) {
			result = x % y;
		}
		else {
			printf("에러: 0으로 나눌 수 없습니다.");
			return 1;
		}
		break;
	default:
		printf("지원되지 않는 연산자입니다.");
		return 1;
	}

	printf("%d %c %d = %d", x, op, y, result);

	return 0;
}