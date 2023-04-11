#include <stdio.h>
#include "target.hpp"

namespace sample {

	int function(int32_t a) {
		printf("%s a=%d\n", __FUNCTION__, a);
		return a + 1;
	}

	int function1(int16_t b) {
		printf("%s b=%d\n", __FUNCTION__, b);
		function(b + 2);
		return b + 2;
	}

	int function2(bool b) {
		printf("%s b=%d\n", __FUNCTION__, b);
		function1(3);
		return b == false;
	}
}

