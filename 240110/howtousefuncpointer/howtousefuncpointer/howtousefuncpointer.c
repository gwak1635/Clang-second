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

	printf("메뉴를 선택하세요(0.햄버거 1.치킨 2.피자) : ");
	scanf_s("%d", &choice);

	if (0 <= choice && choice <= 2) {
		pf[choice]();
	}
	return 0;

}

void menu1() {
	printf("햄버거가 호출되었습니다.\n");
}

void menu2() {
	printf("치킨이 호출되었습니다.\n");
}

void menu3() {
	printf("피자가 호출되었습니다.\n");
}