#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node *next;
}*first = NULL, *rear = NULL;
void enqueue(struct Node *q, int x){
   if (!first){
       q->data = x;
       q->next = NULL;
       rear = q;
   }
   else{
    rear->next = q;
    rear = q;
   }
}
int dequeue(){
    int x;
    struct Node *temp; temp=first;
    if(!first){
        printf("Queue is empty!");
    }
    else{
        x = rear->data;
        while(temp->next){
            temp=temp->next;
        }
        delete (rear);
        rear = temp;
        return x;
    }
}
void display(struct Node *q){
    while(q){
        printf("%d",q->data);
        q = q->next;
    }
}
int main()
{
    struct Node *q;
    q = (struct Node *)malloc(sizeof(struct Node));
    q->next = NULL;
    enqueue(q,4);enqueue(q,2);enqueue(q,5);
    display(q);
    printf("Hello World");
    return 0;
}


------------------------------------------------------------
  #include <stdio.h>
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
    if ((q->rear+1)%q->size==q->front){
        printf("Queue is full");
    }
    else{
        q->rear = (q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct Queue *q){
    int x =-1;
    if (q->front==q->rear){
        printf("Queue is empty");
    }
    else{
        q->front = (q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
