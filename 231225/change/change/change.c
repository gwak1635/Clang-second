#include <stdio.h>

int main() {
	int nMoney;
	int nPrice;

	printf("�����κ��� ���� ��: ");
	scanf_s("%d", &nMoney);
	printf("���ǰ�: ");
	scanf_s("%d", &nPrice);

	int nCharge = nMoney - nPrice;

	printf("��õ��:\t%d\n",nCharge/5000);
	nCharge %= 5000;
	printf("õ��:\t%d\n", nCharge / 1000);
	nCharge %= 1000;
	printf("�����:\t%d\n",nCharge / 500);
	nCharge %= 500;
	printf("���:\t%d\n", nCharge / 100);
	nCharge %= 100;
	printf("���ʿ�:\t%d\n", nCharge / 50);
	nCharge %= 50;
	printf("�ʿ�:\t%d\n", nCharge / 10);
}