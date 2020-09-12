/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct Node{
    struct Node *lchild;
    struct Node *rchild;
    int data;
};
struct Queue{
    int size;
    int front;
    int rear;
    struct Node **Q;
};
struct Node *root=NULL;
int isEmpty(struct Queue q){
    return q.front==q.rear;
}
void create(struct Queue *q, int size){
    q->size = size;
    q->front = q->rear=0;
    q->Q= (struct Node **)malloc(q->size*sizeof(struct Node*));
}
void enqueue(struct Queue *q, struct Node *x){
    if (q->rear-1==q->size){
        printf("Queue is full");
    }
    else{
        q->Q[q->rear++]=x;
    }
}
int dequeue(struct Queue *q){
    struct Node* x = NULL;
    if (q->front==q->rear){
        printf("Queue is empty");
    }
    else{
        x=q->Q[q->front++];
    }
    return x;
}


void createT(){
    struct Node *p,*t;
    int x;
    struct Queue q;
    create(&q,100);
    printf("Enter root value");
    scanf("%d",&x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);
    while(!isEmpty(q)){
        p=dequeue(&q);
        printf("Enter left child");
        scanf("%d",&x);
        if(x!=-1){
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
        }
        printf("Enter right child");
        scanf("%d",&x);
        if(x!=-1){
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
        }
    }
}
void preorder(struct Node *p){
    if (p){
        printf("%d",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void Inorder(struct Node *p){
    if (p){
        Inorder(p->lchild);
        printf("%d",p->data);
        Inorder(p->rchild);
    }
}
void Postorder(struct Node *p){
    if(p){
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d",p->data);
    }
}
int main()
{
    createT();
    preorder(root);

    return 0;
}
