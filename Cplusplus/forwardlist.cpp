#include <stdio.h>
#include<iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> fl = {1,2,3,4,5};
    fl.push_front(8);
    forward_list<int>::iterator it;
    for (it = fl.begin();it!=fl.end();it++) cout<<*it<<endl;
    cout<<"using for each loop"<<endl;
    for (int x:fl) cout<<x<<endl;
    return 0;
}
