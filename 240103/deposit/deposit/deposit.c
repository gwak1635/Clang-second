#include <stdio.h>

void sum_it(int money);

int main() {

	
	for (int i = 0; i < 5; i++)
	{
		sum_it(i);
	}
}

void sum_it(int money) {
	static int nMoney = 0;
	nMoney += money;
	printf("현재의 합계는 %d입니다\n", nMoney);
}