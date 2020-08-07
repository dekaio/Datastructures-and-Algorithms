# include<stdio.h>
#include <stdlib.h>
struct Term{
    int expo;
    int coef;
};
struct Poly{
    int n;
    struct Term *ter;
};
void Create(struct Poly *p){
    printf("\nEnter the number of terms of polynomial:");
    scanf("%d", &p->n);
    p->ter = (struct Term*)malloc(sizeof(struct Term)*(p->n));
    printf("\nEnter coefficients and degree:");
    for (int i=0;i<p->n;i++){
        scanf("%d%d",&p->ter[i].coef,&p->ter[i].expo);
    }
}
void Display(struct Poly p){
    int i;
    for (i=0;i<p.n-1;i++){
        printf("%dx%d+",p.ter[i].coef,p.ter[i].expo);
    }
    printf("%dx%d",p.ter[i].coef, p.ter[i].expo);
}
struct Poly *AddPoly(struct Poly p1, struct Poly p2){
    int i,j,k;
    struct Poly *p3 = (struct Poly*)malloc(sizeof(struct Poly));
    p3->ter = (struct Term *)malloc((p1.n+p2.n)*sizeof(struct Term));
    i = j = k = 0;
    while(i<p1.n && j<p2.n){
        if (p1.ter[i].expo>p2.ter[j].expo){
            p3->ter[k++] = p1.ter[i++];
        }
        else if(p1.ter[i].expo<p2.ter[j].expo){
            p3->ter[k++] = p2.ter[j++];
        }
        else{
            p3->ter[k] = p1.ter[i];
            p3->ter[k++].coef = p1.ter[i++].coef +p2.ter[j++].coef;
        }
    }
    for (;i<p1.n;i++)p3->ter[k++] = p1.ter[i];
    for (;j<p2.n;j++)p3->ter[k++] = p2.ter[j];
    p3->n = k;
    return p3;
}
int main(){
    struct Poly poly1;
    Create(&poly1);
    printf("First polynomial\n");
    Display(poly1);
    struct Poly poly2;
    printf("Second polynomial\n");
    Create(&poly2);
    Display(poly2);
    printf("Added polynomial is:");
    Display(*(AddPoly(poly1,poly2)));
    return 0;
}
