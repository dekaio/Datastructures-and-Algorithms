
#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
}*First = NULL;
void Create(int A[], int n){
    struct Node *p,*q;
    int i = 0;
    First = (struct Node *)malloc(sizeof(struct Node));
    p = q = First;
    First->data = A[i++];
    First->next = NULL;
    First->prev = NULL;
    while(i<n){
        struct Node * temp = (struct Node *)malloc(sizeof(struct Node));
        p->next = temp;
        temp->data = A[i++];
        temp->prev = p;
        temp->next = NULL;
        p = p->next;
    }
}
void Display(struct Node *temp){
    struct Node *p,*q;
    while(temp){
        printf("%d",temp->data);
        temp = temp->next;
    }
}
void Insert(struct Node *p, int index, int ele){
    struct Node *q, *r;
    q  = r = p;
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = ele;
    if(index==1){
        temp->next = First;
        First = temp;
    }
    else{
        for (int i=1;i<index;i++){
            r = q;
            if (q){
             q = q->next;   
            }
        }
        r->next = temp;
        if(q){
          temp->next = q;
         q->prev = temp;  
        }
        
    }
}
int main()
{
    int A[5] = {1,2,3,4,5};
    Create(A,5);
    Display(First);
    return 0;
}
