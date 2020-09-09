#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node *next;
}*first = NULL, *rear = NULL;
int count(){
  int count = 0;
  struct Node *temp; temp = first;
  while(temp){
      count++;
      temp = temp->next;
  }  
  return count;
}
void enqueue(int x){
   struct Node *temp; 
   temp = (struct Node *)malloc(sizeof(struct Node));
   temp->next = NULL;
   temp->data = x;
   int c = count();
   if (first == NULL){
       first = rear = temp;
       return;
   }
   else{
        rear->next = temp;
        rear = temp;
        return;
   }
   
}
int dequeue(){
    int x;
    struct Node *temp; temp=first;
    if(!first){
        printf("Queue is empty!");
    }
    else{
        temp = first;
        x = first->data;
        first = first->next;
        free(temp);
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
    enqueue(4);
    enqueue(2);enqueue(5);
    q = first;
    display(q);
    dequeue();
    q = first;
    display(q);
    return 0;
}
