#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *lchild;
        Node *rchild;
};
class Queue{
    private:
        int front;
        int rear;
        int size;
        Node **Q;
    public:
        Queue(){front=rear=-1;size=10;Q = new Node*[size];}
        Queue(int size){front=rear=-1;this->size=size;Q=new Node*[this->size];}
        void enqueue(Node *x);
        Node* dequeue();
        int isEmpty();
        ~Queue();
        //void Display();
};

Queue::~Queue(){
    delete [] Q;
}
void Queue::enqueue(Node *x){
    if(front==rear){
        front++;
        rear++;
    }
    Q[rear++]=x;
}
Node* Queue::dequeue(){
    return Q[front++];
}
//void Queue::Display(){
  //  for(int i=front;i<rear;i++){
    //    cout<<Q[i]->data<<'\n';
    //}   
//}
int Queue::isEmpty(){
    if (front==-1){
        return 1;
    }
    return 0;
}

class Tree{
  private:
    Node *root;  
  public:
    Tree();
    ~Tree();
    Node* GetRoot();
    void CreateTree();
    void Preorder(Node *);
    void Inorder(Node *);
    void Postorder(Node *);
    int Count(Node *);
    int Height(Node *);
};
Tree::Tree(){
    root = NULL;
}
Tree::~Tree(){
    delete root;
}
int Tree::Count(Node *p){
    int x;int y;
    if (p->data){
        x = Count(p->lchild);
        y = Count(p->rchild);
        return x+y+1; 
    }
    return 0;
}
int Tree::Height(Node *p){
    int x,y;
    if (p->data){
        x = Height(p->lchild);
        y = Height(p->rchild);
        if (x>y) return x+1;
        else return y+1;
    }
    return 0;
}
Node* Tree::GetRoot(){
    return root;
}
void Tree::CreateTree(){
    Node *t,*p;
    Queue q (100);
    int x;
    cout<<"Enter the root value";
    cin>>x;
    root = new Node;
    root->data = x;
    root->lchild=root->rchild=NULL;
    q.enqueue(root);
    while(!q.isEmpty()){
        p = q.dequeue();
        cout<<"Enter left child of "<< p->data;
        cin>>x;
        if(x!=-1){
            t = new Node;
            t->data=x;
            t->lchild=NULL;
            t->rchild=NULL;
            p->lchild=t;
            q.enqueue(t);
        }
        cout<<"Enter right child of"<<p->data;
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
        cout<<p->data;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
void Tree::Inorder(Node *p){
    if (p){
        Inorder(p->lchild);
        cout<<p->data;
        Inorder(p->rchild);
    }
}
void Tree::Postorder(Node *p){
    if (p){
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout<<p->data;
    }
}
int main(){
    Tree t;
    t.CreateTree();
    t.Postorder(t.GetRoot());
    cout<<t.Count(t.GetRoot());
    cout << t.Height(t.GetRoot());
    return 0;
}
