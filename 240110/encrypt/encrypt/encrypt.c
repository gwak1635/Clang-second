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
	printf("암호화된 문자열: %s", cipher);
}

int main() {
	char cipher[50];
	int shift = 3;

	printf("영어 소문자로 된 문자열을 입력하시오: ");
	gets_s(cipher, sizeof(cipher));
	encrypt(cipher, shift);

	return 0;
}