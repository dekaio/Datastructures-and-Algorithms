#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
}*First;
struct Stack{
    int size;
    int top;
    struct Node *A;
};
int isFull(struct Stack *s){
        return 0;
}
int isEmpty(struct Stack *s){
    if (s->top  == -1) return 1;
    else return 0;
}
void InsertNode(struct Stack *s, struct Node *n,int index){
    if (index==0){
        First = n;
        s->A = First;
    }
    else{
        struct Node *p;
        
        p= First;
        while(p->next){
            p = p->next;
        }
        p->next = n;
    }
    
}
void DeleteNode(int index){
    struct Node *p,*q ;p = First;q=NULL;
    while(p->next){
        q = p;
        p = p->next;
    }
    if (q) q->next = NULL;
    free(p);
    return;
}
void Push(struct Stack *s, int ele){
    if (isFull(s)){
        printf("\nStack Overflow");
    }
    else{
        s->top++;
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = ele;
        temp->next = NULL;
        InsertNode(s,temp,s->top);
    }
}
void Pop(struct Stack *s){
    if (isEmpty(s)) printf("\nStack is empty");
    else{
        DeleteNode(s->top);
    }
    return;
}
void Display(struct Stack *s){
    while(s->A){
        printf("%d\n",s->A->data);
        s->A = s->A->next;
    }
    s->A = First;
}
int GetElement(int index){
    struct Node *p,*q;
    p = First;q = NULL;
    int i=1;
    while(p){
        if (i == index){
            return p->data;
        }
        else{
            p = p->next;
        }
        i++;
    }
    return -1;
}
int Peek(struct Stack s, int index){
    int i = s.top;
    if (GetElement(index)){
        return GetElement(index);
    }
    else {
        return -1;
    }
}
int stackTop(struct Stack s){
    if (s.top == -1){
        return -1;
    }
    else{
        return GetElement(s.top);
    }
}
int main(){
    struct Stack s;
    s.A = NULL;
    s.top = -1;
   Push(&s, 3);
   Push(&s, 4);Push(&s, 10);
    Display(&s);
    printf("popping");
    Pop(&s);
    Display(&s);
    printf("%d",stackTop(s));
}
