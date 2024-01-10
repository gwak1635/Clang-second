#include <stdio.h>

int main() {

	char menu[5][10] = {
		"init",
		"open",
		"close",
		"read",
		"write"
	};

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 메뉴: %s \n", i, menu[i]);
	}

	return 0;
}