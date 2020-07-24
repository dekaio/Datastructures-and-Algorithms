/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct Matrix{
    int *A;
    int size;
}
void Generate(struct Matrix *mat, int n, int type){
    if (type==1) mat.size = n;
    else if (type==2 || type==3) mat->size = n*(n+1)/2;
    else if (type==4) mat->size=3*n-2;
    else if (type==5) mat->size = 2*n-1;
}
void Create(struct Matrix *mat, int type);
    printf("\nEnter the elements here");
    int index;
    for (int i=0;i<mat->size;i++){
        for (int j=0;j<mat->size;j++){
            if (type==1){
                if (i==j){
                    scanf("%d",mat->A[i]);
                }
            }
            else if (type==2){
                if (i>=j){
                    index = (n*(i-1))-((i-1)*(i-2)/2) + j-i;
                    scanf("%d",mat->A[index]);
                }
            }
            else if (type==3){
                if (j>=i){
                  index = i*(i-1)/2 +j-1;
                  scanf("%d",mat->A[index]);
                }
            }
            else if (type==4){
                if (i==j){
                    index = i-1;
                    scanf("%d",A[index]);
                }
                else if (i-j ==1){
                    index = n + i-1;
                    scanf("%d",A[index]);
                }
                else if (i-j== -1){
                    index = 2*n-2+j;
                    scanf("%d",A[index]);
                }
            }
            else if (type==5){
                
            }
        }
    }
int main()
{   struct Matrix mat;
    int type,ch,size;
    printf("Choose the type of matrix: 1. Diagonal 2. Upper triangular 3. Lower triangular 4. Tridiagonal 5. Toeplitz ");
    scanf("%d",&type);
    printf("1.Create 2.Set 4. Get 5.Display");
    scanf("%d",&ch);
    printf("\nEnter the size of the matrix: ");
    scanf("%d",&size);
    Generate(&mat, size,type);
    int *A;
    switch(ch){
        case 1:
            {
                
            }
    }
    return 0;
}
