
#include <stdio.h>
#include<iostream>
#include <vector>
using namespace std;
int main()
{
    //list(ll),forward_list(singly ll)
    // for containers like list, forward list,deque, below are same
    vector<int> v={10,20,30,40};
    v.push_back(25);
    v.push_back(48);
    v.pop_back();
    vector<int>:: iterator itr;
    for (itr=v.begin();itr!=v.end();itr++)
        cout<<++*itr<<endl;
    cout<<"using for each loop"<<endl;
    for (int x:v) cout<<x<<endl;

    return 0;
}
