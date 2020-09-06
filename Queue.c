#include <stdio.h>

struct Queue{
    int size;
    int Front=-1;
    int Rear=-1;
    int *Q;
}
void enqueue(Queue *q, int x){
    if (q->Rear==q->size-1){
        printf("Queue is full");
    }
    else{
        q->Rear++;
        q->Q[Rear]=x;
    }
}
void dequeue(Queue *q, int x){
    if (q->Rear==-1){
        printf("Queue is empty")
    }
    else{
        q->Q[0]= x;
        return x;
    }
    return -1;
}
int main()
{
    struct Queue *queue;
    printf("Hello World");

    return 0;
}
