#include<stdio.h>

struct tagStudent {
	char name[10];
	int eng;
	int math;
	int phy;
};

int main() {
	struct tagStudent stStudent[] = {
		{"ȫ�浿", 82, 72, 58},
		{"������", 97, 82, 39},
		{"�̼���", 52, 62, 39},
		{"�庸��", 88, 72, 62}
	};

	for (int i = 0; i < 4; i++)
	{
		printf("%s: ���� = %d\t���� = %d\t���� = %d\n", stStudent[i].name, stStudent[i].eng, stStudent[i].math, stStudent[i].phy);
	}
	return 0;
}