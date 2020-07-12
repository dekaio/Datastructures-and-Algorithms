#include<stdio.h>

int comb(int n, int r) {
	if (n ==r || r ==0) {
		return 1;
	}
	return comb(n - 1, r - 1) + comb(n - 1, r);
}
int fact(int n) {
	if (n <=1) {
		return 1;
	}
	return fact(n - 1) * n;
}
int nCr(int n, int r) {
	if (n <= 1) {
		return 1;
	}
	return fact(n) / (fact(n - r) * fact(r));
}
int main() {
	printf("%d",nCr(4, 2));
	return 0;
}