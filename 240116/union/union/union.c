#include <stdio.h>

union ip_address {
	unsigned long num;
	unsigned char ch[4];
};

int main() {
	union ip_address addr;
	
	addr.ch[0] = 0x1;
	addr.ch[1] = 0.0;
	addr.ch[2] = 0.0;
	addr.ch[3] = 0x7f;

	printf("%x\n", addr.num);

	return 0;
}