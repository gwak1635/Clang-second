#include<stdio.h>

struct tagStudent {
	char name[10];
	int eng;
	int math;
	int phy;
};

int main() {
	struct tagStudent stStudent[] = {
		{"홍길동", 82, 72, 58},
		{"강감찬", 97, 82, 39},
		{"이순신", 52, 62, 39},
		{"장보고", 88, 72, 62}
	};

	for (int i = 0; i < 4; i++)
	{
		printf("%s: 영어 = %d\t수학 = %d\t물리 = %d\n", stStudent[i].name, stStudent[i].eng, stStudent[i].math, stStudent[i].phy);
	}
	return 0;
}