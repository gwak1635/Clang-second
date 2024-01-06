#include <stdio.h>

void update_array(int x[]) {
	x[0] = 99;
}

int main() {
	int a[] = { 10,20,30,40 };
	update_array(a);
	printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);

	return 0;
}