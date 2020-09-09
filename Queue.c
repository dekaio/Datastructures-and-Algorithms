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
