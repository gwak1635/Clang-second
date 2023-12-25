#include <stdio.h>

int main() {
	int nMoney;
	int nPrice;

	printf("고객으로부터 받은 돈: ");
	scanf_s("%d", &nMoney);
	printf("물건값: ");
	scanf_s("%d", &nPrice);

	int nCharge = nMoney - nPrice;

	printf("오천원:\t%d\n",nCharge/5000);
	nCharge %= 5000;
	printf("천원:\t%d\n", nCharge / 1000);
	nCharge %= 1000;
	printf("오백원:\t%d\n",nCharge / 500);
	nCharge %= 500;
	printf("백원:\t%d\n", nCharge / 100);
	nCharge %= 100;
	printf("오십원:\t%d\n", nCharge / 50);
	nCharge %= 50;
	printf("십원:\t%d\n", nCharge / 10);
}