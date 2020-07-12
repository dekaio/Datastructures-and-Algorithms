#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct Array {
	//int A[20];
	int* A;
	int size;
	int length;
};

void display(struct Array arr) {
	for (int i = 0; i < arr.length; i++) {
		printf("%d", arr.A[i]);
	}
	printf("\n");
}

void append(struct Array* arr, int x) {
	if (arr->length < arr->size) {
		arr->A[arr->length++] = x;
	}

}
void insert(struct Array* arr, int index, int ele) {
	if (arr->length < arr->size) {
		for (int i = arr->length; i > index; i--) {
			arr->A[i] = arr->A[i - 1];
		}
	}
	arr->A[index] = ele;
	arr->length = arr->length++;

}

void insert2(struct Array arr, int index, int val) {
	for (int i = arr.length; i > index; i--) {
		arr.A[i] = arr.A[i - 1];
	}
	arr.A[index] = val;
	arr.length = arr.length++;
	display(arr);

}
int Delete(struct Array* arr, int index) {
	int x = 0, i;
	if (index >= 0 && arr->length > index) {
		x = arr->A[index];
		for (i = index; i < arr->length - 1; i++) {
			arr->A[i ] = arr->A[i+1];
		
		}
		arr->length--;
	}
	
	return x;
}
//28June 2020
int LinearSearch(struct Array arr, int key) {
	for (int i = 0; i < arr.length; i++) {
		if (key == arr.A[i]) {
			return i;
		}
	}
	return -1;
}
void swap(int* ele1, int* ele2) {
	int temp;
	temp = *ele1;
	*ele1 = *ele2;
	*ele2 = temp;
}

int LinearSearchTransposition(struct Array* arr, int key) {
	for (int i = 0; i < arr->length; i++) {
		if (key == arr->A[i]) {
			if (i > 0) {
				swap(&arr->A[i - 1], &arr->A[i]);
			}
			return i;
		}
	}
	return -1;
}
int LinearSearchMoveToHead(struct Array* arr, int key) {
	for (int i = 0; i < arr->length; i++) {
		if (key == arr->A[i]) {
			swap(&arr->A[i], &arr->A[0]);
			return i;
		}
	}
	return -1;
}
int BinarySearch(struct Array arr, int key) {
	int h = arr.length-1;
	int l = 0;
	int mid;
	while (l<=h) {
		mid = (h + l) / 2;
		if (arr.A[mid] == key) {
			return mid;
		}
		else if (key < arr.A[mid]){
			h = mid-1;
		}
		else if (key > arr.A[mid]) {
			l = mid+1;
		}
	};
	return -1;
}
int RBinSearch(struct Array arr, int key, int l, int h ) {
	int mid;
	if (l <= h) {
		mid = (l + h) / 2;
		if (arr.A[mid] == key) {
			return mid;
		}
		else if (key > arr.A[mid]) {
			return RBinSearch(arr, key, mid + 1, h);
			//l = mid + 1;
		}
		else if (key < arr.A[mid]) {
			return RBinSearch(arr, key, l, mid - 1);
			//h = mid - 1;
		}
		//RBinSearch(arr, key, l, h);
	}
	//else return -1;
	return -1;
	
}
//29 June 2020
int getElement(struct Array arr, int index) {
	if (index < arr.length && index>=0) {
		return arr.A[index];
	}
	return -1;
}
int setElement(struct Array *arr, int index, int ele) {
	if (index < arr->length && index>=0) {
		arr->A[index] = ele;
		return 0;
	}
	return -1;
}
int maximum(struct Array arr) {
	int max = arr.A[0];
	for (int i = 1; i < arr.length; i++) {
		if (max < arr.A[i]) {
			max = arr.A[i];
		}
	}
	return max;
}
int minimum(struct Array arr) {
	int min = arr.A[0];
	for (int i = 0; i < arr.length; i++) {
		if (arr.A[i] < min) {
			min = arr.A[i];
		}
	}
	return min;
}
int sum(struct Array arr) {
	int s=0, i;
	for (i = 0; i < arr.length; i++) {
		s = s + arr.A[i];
	}
	return s;
}
float average(struct Array arr) {
	return (float)sum(arr) / (arr.length);
}
int Rtotal(struct Array arr, int n ){
	if (n < 0) {
		return 0;
	}
	else {
		return Rtotal(arr,n - 1) + arr.A[n];
	}
	return -1;
}
int ReverseArray(struct Array* arr) {
	int* B = (int*)malloc(arr->length * sizeof(int));
	for (int i = 0; i < arr->length; i++) {
		
		B[i] = arr->A[arr->length - i - 1];
	}
	for (int i = 0; i < arr->length; i++) {
		
		arr->A[i] = B[i];
	}
	return 0;
}
int ReverseArray2(struct Array* arr) {
	int i, j;
	int* B = (int*)malloc(arr->length * sizeof(int));
	for (i = arr->length - 1, j = 0; j<arr->length ; j++, i--) {
		B[j] = arr->A[i];
		
	}
	for ( i = 0; i < arr->length; i++) {
		arr->A[i] = B[i];
	}
	return 0;
}
int ReverseArray3(struct Array* arr) {
	for (int i = 0, j = arr->length-1; i <j ; i++,j--) {
		swap(&arr->A[i], &arr->A[j]);
	}
	return 0;
}
void leftShiftArray(struct Array* arr) {
	int i;
	while (arr->length > 0) {

		for (i = 0; i < arr->length; i++) {
			arr->A[i] = arr->A[i + 1];
		}
		arr->length--;
		display(*arr);	
	}
}
void RightShiftArray(struct Array* arr) {
	for(int i = 0; i < arr->length; i++) {
		arr->A[arr->length-1-i] = arr->A[arr->length-i];
		display(*arr);
	}	
}
void LeftRotation(struct Array* arr) {
	int temp, count =0, i;
	while (count < arr->length) {
		temp = arr->A[0];
		for ( i = 0; i < arr->length; i++) {
			arr->A[i] = arr->A[i + 1];
		}
		arr->A[arr->length - 1] = temp;
		display(*arr);
		count++;
	}
}
void RightRotation(struct Array* arr) {
	int i, count=0, temp;
	while ( count < arr->length) {
		temp = arr->A[arr->length- 1];
		for (i = 0; i < arr->length; i++) {
			arr->A[arr->length - 1 - i] = arr->A[arr->length-2 - i];	
		}
		arr->A[0] = temp ;
		display(*arr);
		count++;
	}
}
void InsertInSorted(struct Array* arr, int ele) {
	int i = 0;
	while (ele > arr->A[i] && i<arr->length) {
		i++;
	}
	//printf("%di\n", i);
	for (int j = arr->length-1; j >= i; j--) {
		arr->A[j + 1] = arr->A[j];
	}
	arr->A[i] = ele;
	arr->length++;
	display(*arr);
}
void InsertInSorted2(struct Array* arr, int ele) {
	int i;
	for (i = arr->length-1; i >=-1; i--) {
		if (ele < arr->A[i]) {
			arr->A[i + 1] = arr->A[i];
		}
		else
		{
			arr->A[i+1] = ele;
			break;
		}
	}
	arr->length++;
	display(*arr);
}
void InsertInSorted3(struct Array *arr, int ele) {
	int i = arr->length - 1;
	if (arr->length == arr->size) {
		return;
	}
	while (i>=0 && ele<arr->A[i])
	{
arr->A[i + 1] = arr->A[i];
i--;
	}
	arr->A[i + 1] = ele;
	arr->length++;
}
int IsSorted(struct Array arr) {
	for (int i = 0; i < arr.length - 1; i++) {
		if (arr.A[i] > arr.A[i + 1]) {
			return -1;
		}
	}
	return 0;
}
void SortPositiveNegative(struct Array* arr) {
	int i = 0;
	int j = arr->length - 1;
	while (i < j) {
		while (arr->A[i] < arr->A[i + 1] && i < arr->length) {
			++i;
		}
		while (arr->A[j] > arr->A[j - 1] && j > 0) {
			--j;
		}
		//printf("%d%d", i, i);
		if (i < j)
			swap(&arr->A[i + 1], &arr->A[j - 1]);
	}
}
void Rearrange(struct Array* arr) {
	int i = 0;
	int j = arr->length - 1;
	while (i < j) {
		while (arr->A[i] < 0) ++i;
		while (arr->A[j] > 0) --j;
		if (i < j) swap(&arr->A[i], &arr->A[j]);
	}
}

//2nd July 2020
void Merge(struct Array* arr, struct Array* arr2)
{
	int i = 0, j = 0, k = 0;
	struct Array* arr3 = (struct Array*)malloc(sizeof(struct Array));
	while (i < arr->length && j < arr2->length) {
		if (arr->A[i] < arr2->A[j]) arr3->A[k++] = arr->A[i++];
		else arr3->A[k++] = arr2->A[j++];
	}
	for (; i < arr->length; i++) {
		arr3->A[k++] = arr->A[i];
	}
	for (; j < arr2->length; j++) {
		arr3->A[k++] = arr2->A[j];
	}
	arr3->length = arr->length + arr2->length;
	arr3->size = 40;
	display(*arr3);
	free(arr3);
}
void Union(struct Array* arr1, struct Array* arr2) {
	int i = 0, j = 0, k = 0;
	struct Array* arr3 = (struct Array*)malloc(sizeof(struct Array));
	while (i < arr1->length && j < arr2->length) {
		if (arr1->A[i] < arr2->A[j]) {
			arr3->A[k++] = arr1->A[i++];
		}
		else if (arr1->A[i] > arr2->A[j]) {
			arr3->A[k++] = arr2->A[j++];
		}
		else if (arr1->A[i] == arr2->A[j]) {
			arr3->A[k++] = arr1->A[i];
			i++; j++;
		}
	}
	for (; i < arr1->length; i++) {
		arr3->A[k++] = arr1->A[i];
	}
	for (; j < arr2->length; j++) {

		arr3->A[k++] = arr2->A[j];
	}
	arr3->length = k;
	display(*arr3);
	free(arr3);
}

struct Array* intersection(struct Array* arr1, struct Array* arr2) {
	int i = 0, j = 0, k = 0;
	struct Array* arr3 = (struct Array*)malloc(sizeof(struct Array));
	while (i < arr1->length && j < arr2->length) {
		if (arr1->A[i] == arr2->A[j]) {
			arr3->A[k++] = arr1->A[i++]; j++;
		}
		else if (arr1->A[i] < arr2->A[j]) {
			i++;
		}
		else if (arr2->A[j] < arr1->A[i]) j++;
	}
	arr3->length = k;
	arr3->size = 20;
	return arr3;
}
struct Array* Difference(struct Array* arr1, struct Array* arr2){
	int i = 0, j = 0, k = 0;
	struct Array* arr3 = (struct Array*)malloc(sizeof(struct Array));
	while (i < arr1->length && j < arr2->length) {
		if (arr1->A[i] == arr2->A[j]) {
			i++; j++;
		}
		else if (arr1->A[i] < arr2->A[j]) {
			arr3->A[k++] = arr1->A[i++];
		}
		else if (arr2->A[j] < arr1->A[i]) {
			j++;
		}
	}
	for (; i < arr1->length; i++) {
		arr3->A[k++] = arr1->A[i];
	}
	arr3->length = k;
	arr3->size = 20;
	return arr3;
}
int main() {
	
	//struct Array arr = { {-2,-1,0,4,5,7},20,6 };
	//struct Array arr2 = { {-1,2,4,7,8,10},20,6 };
	//struct Array *arr3 = Difference(&arr, &arr2);
	//display(arr);
//	printf("\n");
//	display(*arr3);

	int size, len;
	int ch;
	int val, ind;
	struct Array arr;
	printf("%s", "Enter the size of array");
	scanf_s("%d", &arr.size);
	printf("%s", "Enter the length of the array");
	scanf_s("%d", &arr.length);
	arr.A = (int *)malloc(arr.size*sizeof(int));
	printf("%s", "Enter the elements of array");
	for (int i = 0; i < arr.length; i++) {
		//printf("%d", arr.A[i]);
		scanf_s("%d", &arr.A[i]);
	}
	do
	{
		printf("%s","Enter the operations to be executed/n 1. Delete element 2. Insert Element 3.Display 4.Exit");
		scanf_s("%d", &ch);
		switch (ch)
		{
		case 1:
			printf("Enter the element index to be deleted");
			scanf_s("%d", &val);
			Delete(&arr, val);
			break;
		case 2:
			printf("Enter the index of the element to be inserted");
			scanf_s("%d",&ind);
			printf("Enter the elemet to be inserted");
			scanf_s("%d", &val);
			insert(&arr, ind, val);
			break;
		case 3:
			display(arr);
			break;
		default:
			break;
		}
	} while (ch<4);
}