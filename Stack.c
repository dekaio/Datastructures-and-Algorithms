#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int size;
    int *A;
    int top;
};
int isFull(struct Stack *s){
    if(s->top!=s->size-1){
        return 0;
    }
    else return 1;
}
int isEmpty(struct Stack *s){
    if (s->top  == -1) return 1;
    else return 0;
}
void Push(struct Stack *s, int ele){
    if (isFull(s)){
        printf("\nStack Overflow");
    }
    else{
        s->top++;
        s->A[s->top] = ele; 
    }
}
void Pop(struct Stack *s){
    if (isEmpty(s)) printf("\nStack is empty");
    else{
        s->A[s->top] = -1;
        s->top--;
    }
}
void Display(struct Stack *s){
    for (int i=0;i<s->top+1;i++){
        printf("%d",s->A[i]);
    }
}
int Peek(struct Stack s, int index){
    int i = s.top;
    if (s.top >= index){

        printf("%d", s.A[index]);
        return s.A[index];
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
        return s.A[s.top];
    }
}
int main(){
    struct Stack s;
    printf("Enter the size of the stack:\n");
    scanf("%d",&s.size);
    s.A = (int *)malloc(sizeof(struct Stack)*s.size);
    s.top = -1;
    Push(&s, 3);Push(&s, 4);Push(&s, 10);
    Display(&s);
    Peek(s,1);
}
