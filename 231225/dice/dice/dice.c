#include<time.h>
#include<stdio.h>

int main() {
	srand((unsigned)time(NULL));
	rand();

	int count;
	printf("�ֻ����� ���� Ƚ�� : ");
	scanf_s("%d", &count);
	int	nArray[6] = { 0, };

	for (int i = 0; i < count; i++)
	{
		nArray[rand() % 6]++;
	}

	printf("====================================\n");
	printf("��\t��\n");
	printf("====================================\n");
	for (int i = 0; i < 6; i++)
	{
		printf("%d\t%d\n", i + 1, nArray[i]);
	}

	return 0;

}