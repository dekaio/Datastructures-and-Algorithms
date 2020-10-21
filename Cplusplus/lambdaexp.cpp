#include <iostream>
using namespace std;
//[capture-list](parameter_list)->returntype{body}
template<typename T>
void fun(T p){
    p();
}
int main()
{
    [](){cout<<"Hello";}();
    [](int x, int y){cout<<"sum:"<<x+y;}(10,4);
    auto x = [](int x, int y){return x+y;}(10,4);
    int a = [](int x, int y)->int{return x+y;}(1)
    cout<<"a is"<<a<<endl;
    auto f = [](){cout<<"Hello";};f();
    fun(f);
    int a = 10;
    int b = 5;
    [&a,&b](){cout<<a+b<<endl;}();
    return 0;
}
