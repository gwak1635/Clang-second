#include <stdio.h>

void show_prompt(char* p) {
	printf(p);
}

int main() {
	show_prompt("정수를 입력하시오");
	return 0;
}