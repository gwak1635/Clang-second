#include<stdio.h>
int main() {

	int nChance = 10;
	char answer[100] = "it stands for hex science";
	char blank[100] = "__ ______ ___ ___ _______";
	char solution;
	int isPlaying = 1;
	

	while (isPlaying) {
		int check = 0;
		printf("남은 횟수: %d\n", nChance);
		printf("문자열 : %s\n", blank);
		printf("글자를 추측하시오: ");
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
			printf("남은 횟수가 모두 소모되었습니다. 게임 오버!");
			isPlaying = 0;
		}

		if (strcmp(answer, blank) == 0) {
			printf("문자열 : %s\n",blank);
			printf("문장을 모두 맞혔습니다! 게임 승리!");
			isPlaying = 0;
		}

	}


	
}