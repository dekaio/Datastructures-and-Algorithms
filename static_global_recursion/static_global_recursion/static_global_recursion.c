#include <stdio.h>
//int x = 0;
int fun(int n) {
	int static x = 0;
	if (n > 0) {
		x++;
		return fun(n - 1) + x;
	}
	return 0;
}
int main() {
	int val;
	//val = fun(5);
	printf("%d\n", fun(5));
	printf("%d\n", fun(5));
	return 0;

}