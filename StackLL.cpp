#include<stdio.h>
#include<stdlib.h>
class Node{
    public:
    int x;
    Node * next;
    void Push(int);
    void Pop();
    void Display();
    void GetTopElement();
    int isEmpty();
}*top = NULL;

int Node::isEmpty(){
    if (!top) return 1;
    return 0;
}
void Node::Push(int ele){
    Node *temp = new Node;
    temp->data = ele;
    temp->next = NULL:
    if (isEmpty()){
        top = temp;
    }
    else{
        Node *p = top;
        while(p->next){
            p = p->next;
        }
        p->next = temp;
    }
}
void Node::Pop(){
    if (isEmpty()) return;
    else{
        struct Node *p,*q ;p = First;q=NULL;
        while(p->next){
            q = p;
            p = p->next;
        }
        if (q) q->next = NULL;
        delete p;
        return; 
    }
    
}
void Node::Display(){
    Node *p = top;
    while(p){
        printf("%d\n",p->data);
        p = p->next;
    }
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
