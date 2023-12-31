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

	printf("동전의 앞면: %d", front);
	printf("동전의 뒷면: %d", back);

}

int tossing() {
	return rand() % 2;
}