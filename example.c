#include "xor.h"
#include <stdio.h>

int main() {
	int true = xor(1, 0);
	if(true) {
		printf("xor!\n");
	}
}
