#include <stdio.h>

int funA(int n) {

	if (n > 100) {
		return n - 10;
	}
	return funA(funA(n + 11));
}

int main() {
	int ret = funA(99);
	printf("%d", ret);
	return 0;
}