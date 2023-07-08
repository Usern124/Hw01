#include "math_functions.h"

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int division(int a, int b) {
	return a / b;
}
int exponentiation(int a, int b) {
	int c = 1;
	while (b) {
		c *= a;
		--b;
	}
	return c;
}