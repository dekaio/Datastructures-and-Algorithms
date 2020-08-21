#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int size;
    int *A;
    int top;
}
int isFull(struct Node *s){
    if(s.top!=s->size-1){
        return 0;
    }
    else return 1;
}
int isEmpty(struct Node *s){
    if (s.top  == -1) return 1;
    else return 0;
}
void Push(struct Stack *s, int ele){
    if isFull(s){
        printf("\nStack Overflow")
    }
    else{
        s.top++;
        s->A[top] = ele; 
    }
}
void Pop(struct stack *s){
    if isEmpty(s) printf("\nStack is empty");
    else{
        s->A[top] = -1;
        s.top--;
    }
}
void Display(struct Stack *s){
    for (int i=0;i<s.top;i++){
        printf("%d",s->A[i]);
    }
}
int Peek(struct Stack *s, int index){
    int i = s.top;
    if (s.top > index){

        printf("%d", s->A[i]);
        return s->A[i];
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
        return s->A[s.top];
    }
}
int main(){
    Stack s;
    printf("Enter the size of the stack:\n");
    scanf("%d",&s->size);
    s->A = (struct Stack *)malloc(sizeof(struct Stack)*s->size);
    s.top = -1;
    Push(3);
    Display(&s);
}
