#include<stdio.h>
#define GRAVITY  9.8
#define X0  0
#define Y0  0
#define VEL_X  20
#define VEL_Y  20

int main() {
	for (int i = 1; i <= 10; i++)
	{
		float x = X0 + VEL_X * i;
		float y = Y0 + VEL_Y * i - 0.5 * GRAVITY * i * i;
		printf("%d초 후의 위치=(%f, %f)\n", i, x, y);
	}

	return 0;
}