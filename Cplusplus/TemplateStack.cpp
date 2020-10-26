#include<iostream>
using namespace std;
template<class T>
class Stack{
    private:
        T *stk;
        int top;
        int size;
    public:
        Stack(int size){
            this->size = size;
            top = -1;
            stk = new T[size];
        }
        void Push(T x);
        int Pop();
};
template<class T>
void Stack<T>::Push(T x){
    
    if (top == size-1) cout<<"Stack is full";
    else{
        stk[++top] = x;
    }
}
template<class T>
T Stack<T>::Pop(){
    T x = 0;
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
    Stack<int> s(10);
    s.Push(6);
    cout<<s.Pop();
    return 0;
}
