
#include <stdio.h>
void Swap(int *a, int *b){
    int *temp = a;
    a = b;
    b = a;
}
void BubbleSort(int A[], int n){
    int flag = 0;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (A[j]>A[j++]) {
                Swap(&A[j],&A[j++]);
                flag = 1;
            }
        }
        if (flag==0) return;
    }
}
void Display(int A[], int n){
    for (int i=0;i<n;i++){
        printf("%d",A[i]);
    }
}
int main()
{
    int A[] = {3,5,2,6,4};
    BubbleSort(A,5);
    Display(A,5);
    return 0;
}
