#include <stdio.h>

void menu1();
void menu2();
void menu3();

int main() {
	int choice;

	int (*pf[3])(void);

	pf[0] = menu1;
	pf[1] = menu2;
	pf[2] = menu3;

	printf("�޴��� �����ϼ���(0.�ܹ��� 1.ġŲ 2.����) : ");
	scanf_s("%d", &choice);

	if (0 <= choice && choice <= 2) {
		pf[choice]();
	}
	return 0;

}

void menu1() {
	printf("�ܹ��Ű� ȣ��Ǿ����ϴ�.\n");
}

void menu2() {
	printf("ġŲ�� ȣ��Ǿ����ϴ�.\n");
}

void menu3() {
	printf("���ڰ� ȣ��Ǿ����ϴ�.\n");
}