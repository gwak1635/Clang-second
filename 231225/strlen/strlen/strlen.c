#include<stdio.h>

int main() {
	char string[100];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf_s("%s", string, sizeof(string));
	
	int i = 0;
	while (string[i] != '\0') {
		i++;
	}
	printf("���ڿ��� ����: %d\n", i);
	return 0;
}