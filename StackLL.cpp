#include<stdio.h>
#include<stdlib.h>
class Node{
    public:
    int data;
    Node * prev = NULL;
    void Push(int);
    void Pop();
    void Display();
    int GetTopElement();
    int isEmpty();
    int Peek(int);
}*top = NULL;

int Node::isEmpty(){
    if (!top) return 1;
    return 0;
}
void Node::Push(int ele){
    Node *temp = new Node;
    temp->data = ele;
    temp->prev = NULL;
    if (isEmpty()){
        top = temp;
    }
    else{
        Node *p = top;
        top = temp;
        top->prev = p;
    }
}
void Node::Pop(){
    if (isEmpty()) return;
    else{
        Node *p = top;
        top = top->prev;
        delete p;
    }
    
}
void Node::Display(){
    Node *p = top;
    while(p){
        printf("%d\n",p->data);
        p = p->prev;
    }
}
int Peek(int index){
    int i = 1 ;
    Node *p = top;
    while(p){
        if (i == index){
            return p->data;
        }
        p = p->prev;
        i++;
    }
    return 0;
}
int Node::GetTopElement(){
    if (!top){
        return -1;
    }
    else{
        return top->data;
    }
}
int main(){
    Node stack;
    stack.Push(1);stack.Push(5);
    stack.Display();
    printf("--------");
    printf("%d",stack.Peek(1));
}
