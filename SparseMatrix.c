include <stdio.h>
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
}
void create(struct SparseMatrix *s){
    int i;
    printf("Enter Dimensions(Rows and columns)");
    scanf("%d%d",s->m,s->n);
    printf("Enter no of non zero elements");
    scanf("%d",s->num);
    s->ele = (int *)malloc(sizeof(int)*s->num);
    for (i=0;i<s->num;i++){
        printf("Enter row index, column index and element: ");
        scanf("%d%d%d",s->ele[i]->n,s->ele[i]->j,s->ele[i]->x);
    }
}
void display (struct SparseMatrix s){
    for (int i=0;i<s->)
}
int main()
{   struct SparseMatrix s;
    void create(&s);
    
    return 0;
}
