#include<stdlib.h>
#include<stdio.h>
#include<time.h>


int tossing();

int main() {

	srand((unsigned)time(NULL));
	rand();

	int front = 0;
	int back = 0;

	for (int i = 0; i < 100; i++)
	{
		if (tossing()) {
			front++;
		}
		else {
			back++;
		}
	}

	printf("������ �ո�: %d", front);
	printf("������ �޸�: %d", back);

}

int tossing() {
	return rand() % 2;
}