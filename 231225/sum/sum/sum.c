#include<stdio.h>

int main() {
	int x;
	int avg = 0;
	for (int i = 0; i < 3; i++)
	{
		printf("������ �Է��ϼ���: ");
		scanf_s("%d", &x);
		avg += x;
	}
	avg /= 3;
	printf("��հ��� %d�Դϴ�.", avg);
	return 0;
}