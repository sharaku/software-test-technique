#include <stdio.h>
#include "target.hpp"

namespace sample {

	int function(int32_t a) {
		printf("stub %s a=%d\n", __FUNCTION__, a);
		return a + 1;
	}

	int function1(int16_t b) {
		printf("stub %s b=%d\n", __FUNCTION__, b);
		return b + 2;
	}

	int function2(bool b) {
		printf("stub %s b=%d\n", __FUNCTION__, b);
		return b == false;
	}
}

