#include <stdio.h>

int main() {
	char light;

	do {
		printf("신호등 색상을 입력하세요(r, y, g): ");
		scanf_s("%c", &light, 1);
	} while (~(light=='r'||light=='y'||light=='g'));

	switch (light)
	{
	case 'r':
		printf("정지!");
		break;
	case 'y':
		printf("주의!");
		break;
	case 'g':
		printf("진행!");
		break;
	default:
		printf("이럴리가 없다");
		break;
	}

	return 0;
}