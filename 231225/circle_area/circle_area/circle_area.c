#include <stdio.h>

int main() {
	float radius;
	float area;

	printf("���� �������� �Է��ϼ��� : ");
	scanf_s("%f", &radius);

	area = 3.141592 * radius * radius;
	printf("���� ���� : %f \n", area);

	return 0;
}