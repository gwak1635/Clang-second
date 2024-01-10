#include <stdio.h>
#include <string.h>

int main() {
	char s[] = "Man is immortal, because he has a soul";

	char seps[] = " ,\t\n";
	char* token;
	char* nexttoken;

	token = strtok_s(s, seps, &nexttoken);

	while (token != NULL) {
		printf("ÅäÅ«:%s\n", token);
		token = strtok_s(NULL, seps, &nexttoken);
	}
	return 0;
}