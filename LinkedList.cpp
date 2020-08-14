# include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};
class LinkedList{
    private:
        Node *first;
    public:
        LinkedList(){first = NULL;}
        LinkedList(int A[], int n);
        ~LinkedList();
        void Display();
        void Insert(int index, int ele);
        void Delete(int index);
        int Length();
};
void LinkedList::Insert(int index, int ele){
    Node *p, *q;
    p = q = first;
    Node *newN = new Node;
    newN->data = ele;
    newN->next = NULL;
    int i=1;
    if (index==1){
        newN->next = first;
        first = newN;
        return;
    }
    while(p){
        q = p;
        p = p->next;
        if(i == index-1){
            q->next= newN;
            newN->next = p;
            return;
        }
        i++;
    }
}
LinkedList::LinkedList(int A[], int n){
    Node *last = new Node;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i=1;i<n;i++){
        Node *temp = new Node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = last->next;
    }
    
}
LinkedList::~LinkedList(){
    Node *temp = first;
    while(first){
         first = first->next;
         delete temp;
         temp = first;
    }
}
void LinkedList::Display(){
    class Node *temp = this->first;
    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
int main(){
    int A[5] = {1,2,3,4,5};
    class LinkedList list(A,5);
    list.Insert(4,2);
    list.Display();
    return 0;
}
