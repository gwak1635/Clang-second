#include <stdio.h>

int get_line_parameter(int x1, int y1, int x2, int y2, double* slope, double* yintercept) {
	if (x1 == x2) {
		return -1;
	}
	else
	{
		*slope = (double)(y2 - y1) / (double)(x2 - x1);
		*yintercept = y1 - (*slope) * x1;
		return 0;
	}
}

int main() {
	double s, y;
	if (get_line_parameter(3, 3, 6, 6, &s, &y) == -1) {
		printf("Error\n");
	}
	else {
		printf("기울기는 %f, y절편은 %f\n", s, y);
	}
	return 0;
}