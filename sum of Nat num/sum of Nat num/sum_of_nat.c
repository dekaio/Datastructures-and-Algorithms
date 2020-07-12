#include <stdio.h>

int sum(int n) {
	if (n==0) {
		return 0;
	}
	return sum(n - 1) + n;
}
int factorial(int n) {
	if (n==0)
		return 1;
	return factorial(n - 1) * n;
}
int main() {
	printf("%d",factorial(6));
	return 0;

}