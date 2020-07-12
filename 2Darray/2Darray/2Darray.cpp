#include<stdio.h>
#include<stdlib.h>

int main() {
	//Array in stack
	int A[3][4] = { {1,2,3,5},{3,5,6,7},{7,8,9,0} };

	//	for (int i = 0; i < 3; i++) {
		//	for (int j = 0; j < 4; j++) {
			//	printf("%d", A[i][j]);
				//printf("\n");
		//	}
		//}
		//Row in stack and column in heap
	int* p[3];
	p[0] = (int*)malloc(4 * sizeof(int));
	p[1] = (int*)malloc(4 * sizeof(int));
	p[2] = (int*)malloc(4 * sizeof(int));
	//	for (int i = 0; i < 3; i++) {
		//	for (int j = 0; j < 4; j++) {
			//	p[i][j] = i;
				//printf("%d", p[i][j]);
			//	printf("\n");
			//}
		//}
	//}
	int** C;
	C = (int**)malloc(3 * sizeof(int));
	C[0] = (int*)malloc(4 * sizeof(int));
	C[1] = (int*)malloc(4 * sizeof(int));
	C[2] = (int*)malloc(4 * sizeof(int));

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			C[i][j] = j;
			printf("%d", C[i][j]);
			printf("\n");
		}
	}
	return 0;
}