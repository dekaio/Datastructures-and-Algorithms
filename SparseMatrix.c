#include <stdio.h>
#include<stdlib.h>
struct Element{
    int i;
    int j;
    int x;
};
struct SparseMatrix{
    int m;
    int n;
    int num;
    struct Element *ele;
};
void create(struct SparseMatrix *s){
    int i;
    printf("Enter Dimensions(Rows and columns)");
    scanf("%d%d",&s->m,&s->n);
    printf("Enter no of non zero elements");
    scanf("%d",&s->num);
    s->ele = (struct Element*)malloc(sizeof(int)*s->num);
    for (i=0;i<s->num;i++){
        printf("Enter row index, column index and element: ");
        scanf("%d%d%d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);
    }
}
void display (struct SparseMatrix s){
    int l = 0;
    for (int i=0;i<s.m;i++){
        for (int j=0;j<s.n;j++){
            if (i==s.ele[l].i && j==s.ele[l].j){
                printf("%d",s.ele[l].x);
                l++;
            }
            else printf("%d",0);
            
        }
        printf("\n");
    }
}
struct SparseMatrix *AddMat(struct SparseMatrix mat1, struct SparseMatrix mat2){
    struct SparseMatrix *mat3;
    int i,j,k;
    i=j=k=0;
    mat3 = (struct SparseMatrix *)malloc(sizeof(struct SparseMatrix));
    mat3->ele = (struct Element *)malloc(sizeof(struct Element)*(mat1.num + mat2.num));
    while (i<mat1.num && j<mat2.num){
        if (mat1.ele[i].i < mat2.ele[j].i ){
            mat3->ele[k++] = mat1.ele[i++];
        }
        else if (mat1.ele[i].i > mat2.ele[j].i){
            mat3->ele[k++] = mat2.ele[j++];
        }
        else{
            if (mat1.ele[i].j < mat2.ele[j].j){
                mat3->ele[k++] = mat1.ele[i++];
                }
            else if (mat1.ele[i].j > mat2.ele[j].j){
                mat3->ele[k++] = mat3->ele[j++];
                }
            else
                {
                mat3->ele[k] = mat1.ele[j];
                mat3->ele[k++].x = mat1.ele[i++].x + mat2.ele[j++].x;
                }
        }
    }
    for (;i<mat1.num;i++)mat3->ele[k++] = mat1.ele[i];
    for (;j<mat2.num;j++)mat3->ele[k++] = mat2.ele[j];
   return mat3;
}
int main()
{   struct SparseMatrix s;
    create(&s);
    display(s);
    return 0;
}
