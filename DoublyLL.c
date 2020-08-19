
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
void Delete(struct Node *p, int index){
    struct Node *q,*r; 
    q = r = p;
    if (index == 1){
        q = p;
        p = p->next;
        First = p;
        free(q);
    }
    else{
        for (int i=1;i<index;i++){
            q = p;
            if (p){
                p = p->next;
            }
        }
        if (p->next){
            q->next = p->next;
            r = p->next;
            r->prev = q;
            free (p);
            }
        else{
            q->next = NULL;
            free(p);
        }
        
    }
}
void Reverse1(struct Node *p){
    int l = count(p);
    int A[l];
    int i  = 0;
    while(p){
        A[i++] = p->data;
        p = p->next;
    }
    i--;
    p = First;
    while(p){
        p->data = A[i--];
        p = p->next;
    }
}
void Reverse2(struct Node *p){
    struct Node *q,*r;
    q = r = NULL;
    while(p){
        r = q;
        q = p;
        p = p->next;
        
        q->next = r;
    }
    First = q;
}
void ReverseR(struct Node *p, struct Node *q){
    if (p){
        ReverseR(p->next, p);
        p->next = q;
    }
    else First = q;
}
int main()
{
    int A[5] = {1,2,3,4,5};
    Create(A,5);
    Display(First);
    return 0;
}
