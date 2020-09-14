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
    
}

int main(){
    Queue q = Queue();
    q.enqueue(5);q.enqueue(7);
    q.Display();
    cout<<q.dequeue();
    q.Display();
    return 0;
}
