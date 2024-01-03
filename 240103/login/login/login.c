#include<stdio.h>

int check(id, pw);

int main() {
	int id;
	int pw;
	
	while (1) {
		printf("id: ____\b\b\b\b");
		scanf_s("%d", &id);
		printf("pw: ____\b\b\b\b");
		scanf_s("%d", &pw);
		if (check(id, pw)) {
			break;
		}
	}
	printf("로그인 성공\n");

	return 0;
}

int check(id, pw) {
	static int identy = 1234;
	static int password = 5678;
	static int count = 0;

	if (id == identy && pw == password)
		return 1;
	else {
		count++;
		if (count >= 3) {
			printf("횟수 초과\n");
			exit(1);
		}
		return 0;
	}
		
	
}