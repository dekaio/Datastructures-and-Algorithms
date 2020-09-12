
#include <stdio.h>
#include<stdlib.h>
struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct Queue *q, int size){
    q->size = size;
    q->front = q->rear=0;
    q->Q= (int *)malloc(q->size*sizeof(int));
}
void enqueue(struct Queue *q, int x){
    if (q->rear-1==q->size){
        printf("Queue is full");
    }
    else{
        q->Q[q->rear++]=x;
    }
}
int dequeue(struct Queue *q){
    int x = -1;
    if (q->front==q->rear){
        printf("Queue is empty");
    }
    else{
        x=q->Q[q->front++];
    }
    return x;
}
void display(struct Queue *q){
    int i=0;
    while(i<q->rear){
        printf("%d",q->Q[i++]);
    }
}
int main()
{
    struct Queue *q = (struct Queue*)malloc(sizeof(struct Queue));
    create(q,5);
    enqueue(q,1);
    enqueue(q,2);
    display(q);
    printf("DeletedElementis%d",dequeue(q));
    printf("DeletedElementis%d",dequeue(q));

    return 0;
}
