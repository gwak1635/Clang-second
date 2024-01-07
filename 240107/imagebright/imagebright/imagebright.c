#include <stdio.h>
#define SIZE 10

void print_image(int image[][SIZE]) {
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%03d ", image[i][j]);
		}
		printf("\n");
	}
}

void brighten_image(int image[][SIZE]) {
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			image[i][j] += 10;
		}
	}
}

int main() {
	int image[SIZE][SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			image[i][j] = (j + 1) * 10;
		}
	}

	print_image(image);
	brighten_image(image);
	printf("\n");
	print_image(image);

	return 0;
}

