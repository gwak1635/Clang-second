#include<stdio.h>
#include<math.h>

#define PI 3.141592

double rad(double angle) {
	return angle / 180 * PI;
}

int main() {
	double x = cos(rad(90.0));
	double y = sin(rad(90.0));
	double result = x*x+y*y;

	printf("result=%lf", result);

	return 0;
}