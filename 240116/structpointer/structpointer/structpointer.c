#include <stdio.h>

struct vector {
	double x;
	double y;
};

struct vector get_vector_sum(struct vector a, struct vector b) {
	struct vector result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;
	return result;
}

int main() {
	struct vector v1 = { 2,3 };
	struct vector v2 = { 5,6 };
	struct vector vsum;

	vsum = get_vector_sum(v1, v2);
	printf("(%f, %f)+(%f, %f)=(%f, %f)", v1.x, v1.y, v2.x, v2.y, vsum.x, vsum.y);

	return 0;
}