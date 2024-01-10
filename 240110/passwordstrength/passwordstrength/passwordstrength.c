#include<stdio.h>

int is_lower(char password[]) {
	for (int i = 0; i < strlen(password); i++)
	{
		if (97 <= password[i] && password[i] <= 122) {
			return 1;
		}
	}
	return 0;
}


int is_upper(char password[]) {
	for (int i = 0; i < strlen(password); i++)
	{
		if (33 <= password[i] && password[i] <= 47|| 58 <= password[i] && password[i] <= 64|| 91 <= password[i] && password[i] <= 96||123 <= password[i] && password[i] <= 126) {
			return 1;
		}
	}
	return 0;
}

int is_number(char password[]) {
	for (int i = 0; i < strlen(password); i++)
	{
		if (48 <= password[i] && password[i] <= 57) {
			return 1;
		}
	}
	return 0;
}

int is_sign(char password[]) {
	for (int i = 0; i < strlen(password); i++)
	{
		if (48 <= password[i] && password[i] <= 57) {
			return 1;
		}
	}
	return 0;
}

int main() {

	char password[30];

	while (1) {
		printf("암호를 생성하시오 : ");
		scanf_s("%s", password, sizeof(password));



		if (is_lower(password)&&is_upper(password)&&is_number(password)&& is_sign(password)){
			printf("적정한 암호입니다.\n");
			break;
		}
		else {
			printf("숫자, 소문자, 대문자, 특수문자를 섞어서 암호를 다시 만드세요!\n");
		}
	}

	

	return 0;
}