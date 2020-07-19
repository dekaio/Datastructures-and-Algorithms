#include<stdio.h>
struct Matrix{
    int A[10];
    int size;
};

void SetMatrix(struct Matrix* mat, int row, int val){
    mat->A[row-1] = val;
}
int GetMatrix(struct Matrix mat, int i, int j){
    if (i==j){
        return mat.A[i];
    }
    else return 0;
}
void display(struct Matrix mat){
    for (int i=0;i<mat.size;i++){
        for (int j=0;j<mat.size;j++){
            if (i==j){
                printf("%d",mat.A[i]);
            }
            else if (j==mat.size-1)
                printf("%d\n",0);
            
            else if (j<mat.size){
              printf("%d",0);  
            } 
        }
    }
}
// Lower triangular matrices
struct LowerTri{
    int size;
    int *A;
};
void SetRowMatrix(struct LowerTri *mat, int i, int j, int x){
    if (i>=j){
        int index = i*(i-1)/2+j-1;
      //  printf("%d",index);
        mat->A[index] = x;
    }
}
int GetRowMatrix(struct LowerTri mat, int i, int j){
    int index = 0;
    if (i>=j){
       index = i*(i-1)/2+j-1; 
       return mat.A[index];
    }
    else return 0;   
}
void DisplayMatrix(struct LowerTri mat){
    printf("\n");
    for (int i=1;i<=mat.size;i++){
        for (int j=1;j<=mat.size;j++){
            if (i>=j){
                int index = i*(i-1)/2+j-1;
                //printf("%d",index);
                printf("%d",mat.A[index]);
            }
            else{
                printf("%d",0);
            }
        }
    }
}
int main(){
    struct Matrix mat;
    mat.size = 4;
    SetMatrix(&mat,1,1);SetMatrix(&mat,2,2);SetMatrix(&mat,3,3);SetMatrix(&mat,4,4);
    display(mat);
    printf("%d",GetMatrix(mat,3,3));
}
