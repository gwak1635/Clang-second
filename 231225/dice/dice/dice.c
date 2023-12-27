#include<time.h>
#include<stdio.h>

int main() {
	srand((unsigned)time(NULL));
	rand();

	int count;
	printf("ÁÖ»çÀ§¸¦ ±¼¸± È½¼ö : ");
	scanf_s("%d", &count);
	int	nArray[6] = { 0, };

	for (int i = 0; i < count; i++)
	{
		nArray[rand() % 6]++;
	}

	printf("====================================\n");
	printf("¸é\tºóµµ\n");
	printf("====================================\n");
	for (int i = 0; i < 6; i++)
	{
		printf("%d\t%d\n", i + 1, nArray[i]);
	}

	return 0;

}