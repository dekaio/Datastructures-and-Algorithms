#include<iostream>
using namespace std;
class Stack{
    private:
        int *stk;
        int top;
        int size;
    public:
        Stack(int size){
            this->size = size;
            top = -1;
            stk = new int[size];
        }
        void Push(int x);
        int Pop();
};
void Stack::Push(int x){
    
    if (top == size-1) cout<<"Stack is full";
    else{
        stk[++top] = x;
    }
}
int Stack::Pop(){
    int x = 0;
    if (top==-1){
      cout<<"Stack is empty";  
      return -1;
    } 
    else{
        x = stk[top--];
        return x;
    }
}
int main(){
    Stack s(10);
    s.Push(6);
    cout<<s.Pop();
    return 0;
}
