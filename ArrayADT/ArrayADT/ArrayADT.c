#include<stdio.h>
#include<stdlib.h>

struct Array {
	int* A;
	int size;
	int length;
};

void display(struct Array arr) {
	int i;
	printf("\nElements are\n");
	for (i = 0; i < arr.length; i++) {
		printf("%d", arr.A[i]);
	}
}

int main() {
	struct Array arr;
	int n, i;
	printf("Enter the size of the array");
	scanf_s("%d", &arr.size);
	arr.A = (int*)malloc(arr.size * sizeof(int));
	//printf(arr.size);
	arr.length = 0;
	printf("Enter number of numbers");
	scanf_s("%d", &n);
	printf("Enter all elements\n");
	for (i = 0; i < n; i++) {
		scanf_s("%d", &arr.A[i]);
	}
	arr.length = n;
	display(arr);
	return 0;
}