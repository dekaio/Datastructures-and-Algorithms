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
int main()
{   struct SparseMatrix s;
    create(&s);
    display(s);
    return 0;
}
