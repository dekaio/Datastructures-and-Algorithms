#include <iostream>
using namespace std;

class Queue{
    private:
        int front;
        int rear;
        int size;
        Node **Q;
    public:
        Queue(){front=rear=-1;size=10;Q = new Node*[size];}
        Queue(int size){front=rear=-1;this->size=size;Q=new Node*[this->size];}
        void enqueue(Node x);
        int dequeue();
        void isEmpty();
        void Display();
};
void Queue::enqueue(Node x){
    if(front==rear){
        front++;
        rear++;
    }
    Q[rear++]=x;
}
int Queue::dequeue(){
    return Q[front++];
}
void Queue::Display(){
    for(int i=front;i<rear;i++){
        cout<<Q[i]->data<<'\n';
    }   
}
int Queue::isEmpty(){
    if (front==-1){
        return 1;
    }
}
class Node{
  int data;
  Node *lchild;
  Node *rchild;
};
class Tree{
  private:
    Node *root;  
  public:
    Tree(){root=NULL;}
    void CreateTree();
    void Preorder();
    void Inorder();
    void Postorder();
};
void Tree::CreateTree(){
    Tree *t,*p;
    Queue(100);
    int x;
    cout<<"Enter the root value";
    cin>>x;
    root=new Node;
    root->data = x;
    root->lchild=root->rchild=NULL;
    q.enqueue(root);
    while(!q.isEmpty()){
        p = q.dequeue();
        cout<<"Enter left child of "<<p;
        cin>>x;
        if(x!=-1){
            t = new Node;
            t->data=x;
            t->lchild=NULL;
            t->rchild=NULL;
            p->lchild=t;
            q.enqueue(t);
        }
        cout<<"Enter right child of"<<p;
        cin>>x;
        if(x!=-1){
            t = new Node;
            t->data = x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            q.enqueue(t);
        }
    }
}
void Tree::Preorder( Node *p){
    if(p){
        printf("%d",p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
int main(){
    Tree t = Tree();
    t.CreateTree();
    return 0;
}
