#include <stdio.h>

int main() {
	char light;

	do {
		printf("��ȣ�� ������ �Է��ϼ���(r, y, g): ");
		scanf_s("%c", &light, 1);
	} while (~(light=='r'||light=='y'||light=='g'));

	switch (light)
	{
	case 'r':
		printf("����!");
		break;
	case 'y':
		printf("����!");
		break;
	case 'g':
		printf("����!");
		break;
	default:
		printf("�̷����� ����");
		break;
	}

	return 0;
}