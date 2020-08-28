
#include <stdio.h>
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Display(int A[], int n){
    for (int i=0;i<n;i++){
        printf("%d",A[i]);
    }
}
void BubbleSort(int A[], int n){
    int flag = 0;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (A[j]>A[j+1]) {
                Swap(&A[j],&A[j++]);
                flag = 1;
            }
        }
        if (flag==0) return;
    }
}
void InsertionSort(int A[], int n){
    int j,x;
    for (i=1;i<n;i++){
        j = i-1;
        x = A[i];
        while(j>-1 && A[j]>x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}
int main()
{
    int A[] = {3,5,2,6,4};
    BubbleSort(A,5);
    Display(A,5);
    return 0;
}
