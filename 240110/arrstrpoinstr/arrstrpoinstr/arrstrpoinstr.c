#include <stdio.h>

int main() {
	char s[] = "HelloWorld"; //문장의 일부를 교체할 때 유용
	char* p = "HelloWorld"; //문장을 통째로 교체할 때 유용

	printf("배열로 표시된 문자열 = %s\n", s);
	printf("포인터로 표시된 문자열 = %s\n", p);

	return 0;
}