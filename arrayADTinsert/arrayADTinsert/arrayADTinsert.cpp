#include<stdio.h>
#include<stdlib.h>

struct Array {
	int A[20];
	//int* A;
	int size;
	int length;
};

void append(struct Array *arr, int x ) {
	if (arr->length < arr->size) {
		arr->A[arr->length++] = x;
	}
	
}
void insert(struct Array* arr, int index, int ele) {
	if (arr->length < arr->size) {
		for (int i = arr->length  ; i > index; i--) {
			arr->A[i] = arr->A[i - 1];
		}
	}
	arr->A[index] = ele;
	arr->length = arr->length++;
}
void display(struct Array arr) {
	for (int i = 0; i < arr.length; i++) {
		printf("%d", arr.A[i]);
	}
}

void insert2(struct Array arr, int index, int val) {
	for (int i = arr.length; i > index; i--) {
		arr.A[i] = arr.A[i - 1];
	}
	arr.A[index] = val;
	arr.length = arr.length++;
	display(arr);
}
int main() {
	struct Array arr = { {1,2,3,4,5},20,5 };
	insert(arr, 2, 10);
	printf("\n");
	display(arr);


}