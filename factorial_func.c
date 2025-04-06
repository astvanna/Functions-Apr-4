#include <stdio.h>

int factorial(int n) {
	int res = 1;
	for (int i = 1; i <= n; ++i) {
		res *= i;
	}
	return res;
}

int main() {
	printf("Factorial of %d is %d\n", 6, factorial(6));
	return 0;
}
