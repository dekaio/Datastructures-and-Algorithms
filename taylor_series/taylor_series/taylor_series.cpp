#include <stdio.h>
double taylors(int n, int m) {
	static double p = 1;
	static double f = 1;
	int r;
	if (m == 0) {
		return 1;
	}
	r = taylors(n, m - 1);
	p = p * n;
	f = f * m;
	return r + p / f;
	
}

double e(int n, int m) {
	static double s = 1;
	if (m == 0) {
		return s;
	}
	s = (1 + n*s/m);
	return e(n, m - 1);
}
double eiter(int n, int m) {
	double sum = 1, num = 1, deno =1;
	for (int i = 1; i <= m; i++) {
		//printf("%d \n", i);
		num *= n;
		deno *= i;
		sum += num/deno;
	//	printf("%d \n", sum);
	}
	return sum;
}

double iterative(int n, int m) {
	double s = 1;
	for (double i = m; i> 0; i--) {
		s = 1 + n * s/ i;
	}
	return s;
}
int main() {
	printf("%lf", iterative(1, 10));
	return 0;
}