#include<stdio.h>
int main() {

	int nChance = 10;
	char answer[100] = "it stands for hex science";
	char blank[100] = "__ ______ ___ ___ _______";
	char solution;
	int isPlaying = 1;
	

	while (isPlaying) {
		int check = 0;
		printf("���� Ƚ��: %d\n", nChance);
		printf("���ڿ� : %s\n", blank);
		printf("���ڸ� �����Ͻÿ�: ");
		solution= getchar();
		getchar();

		for (int i = 0; answer[i]!= NULL; i++)
		{
			if (answer[i] == solution) {
				check = 1;
				blank[i] = solution;
			}
		}

		if (check==0)
			nChance--;
		

		if (nChance <= 0) {
			printf("���� Ƚ���� ��� �Ҹ�Ǿ����ϴ�. ���� ����!");
			isPlaying = 0;
		}

		if (strcmp(answer, blank) == 0) {
			printf("���ڿ� : %s\n",blank);
			printf("������ ��� �������ϴ�! ���� �¸�!");
			isPlaying = 0;
		}

	}


	
}