#include <stdio.h>
#include "xor.h"

// One operator have to be true, just one.
int xor(int a, int b) {
	return (a || b) && !(a && b);
}


