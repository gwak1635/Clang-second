#include <stdio.h>
int main() {
	int nArray[10] = { 0, };

	while (1) {
		int num;
		printf("몇 번 연예인을 선택하시겠습니까?(종료:-1): ");
		scanf_s("%d", &num);
		if (num == -1)
			break;
		else if (num >= 1 && num <= 10) {
			nArray[num - 1]++;
		}
	}

	printf("값\t득표결과\t히스토그램\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t%d\t\t",i+1,nArray[i]);
		for (int j = 0; j < nArray[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}