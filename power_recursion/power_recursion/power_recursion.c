#include <stdio.h>
int power(int n, int m) {
	if (m > 0) {
		
		return power(n, m - 1) * n;
	}
	return 1;
	
}

int power2(int n, int m) {
	if (m == 0) {
		return 1;
	}
	else if (m % 2 == 0) {
		return  power2(n * n, m / 2);
	}
	else if (m % 2 != 0) {
		return n * power2(n * n, (m - 1) / 2);
	}
}
int main() {

	printf("%d", power2(2, 16));
	return 0;
}