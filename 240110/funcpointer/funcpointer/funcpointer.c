#include <stdio.h>

int get_min(int, int);

int main() {
	int n1, n2, result;
	int(*pf)(int, int);

	printf("ù ��° ��: ");
	scanf_s("%d", &n1);
	printf("�� ��° ��: ");
	scanf_s("%d", &n1);

	pf = get_min;
	result = pf(n1, n2);

	printf("�� ���� ���� %d�Դϴ�.\n", result);
	return 0;
}
int get_min(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}