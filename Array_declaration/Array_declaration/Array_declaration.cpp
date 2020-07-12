#include <stdio.h>
#include<stdlib.h>
//Array declaration
//int A[5];
//int B[5] = { 0 };
//int c[5] = { 1,2,3,4,5 };
//int D[5] = { 1,2,3 };
//int E[] = { 1,2,3,4,5,6 };
int main() {
	int i;
	int A[10] = {1,2,3,4,5};
	int* p;
	p = (int *)malloc(5 * sizeof(int));
	p[0] = 3;
	p[1] = 4;
	p[2] = 10;
	p[4] = 9;
	p[3] = 8;
	for (i = 0; i < 5; i++) {
		printf("%d \n", A[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("%d \n", p[i]);
	}
	return 0;
}