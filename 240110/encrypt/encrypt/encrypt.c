#include<stdio.h>

void encrypt(char cipher[], int shift) {
	for (int i = 0; cipher[i]!='\0'; i++)
	{
		if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			cipher[i] += shift;
			if (cipher[i] > 'z')
				cipher[i] -= 26;
		}
	}
	printf("��ȣȭ�� ���ڿ�: %s", cipher);
}

int main() {
	char cipher[50];
	int shift = 3;

	printf("���� �ҹ��ڷ� �� ���ڿ��� �Է��Ͻÿ�: ");
	gets_s(cipher, sizeof(cipher));
	encrypt(cipher, shift);

	return 0;
}