#include<stdio.h>

void fun(int n) {

	if (n > 0) {
		printf("%d", n);
		fun(n - 1);
		fun(n - 1);
	}
}

//int main() {
	//printf("%d", func(3));
	//fun(3);
	//return 0;
//}