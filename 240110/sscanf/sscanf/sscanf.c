#include<stdio.h>

int main() {
	char s1[] = "100";
	char s2[30];
	int value;

	sscanf_s(s1, "%d", &value);
	printf("%d\n", value);
	sprintf_s(s2,sizeof(s2), "%d", value);
	printf("%s\n", s2);

	return 0;
}