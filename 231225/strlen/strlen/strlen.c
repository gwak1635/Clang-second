#include<stdio.h>

int main() {
	char string[100];

	printf("문자열을 입력하시오: ");
	scanf_s("%s", string, sizeof(string));
	
	int i = 0;
	while (string[i] != '\0') {
		i++;
	}
	printf("문자열의 길이: %d\n", i);
	return 0;
}