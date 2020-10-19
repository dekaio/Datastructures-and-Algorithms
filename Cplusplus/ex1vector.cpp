#include <stdio.h>
#include<iostream>
#include <vector>
using namespace std;
class Item{
    private:
        string name;
        float price;
        int quantity;
    public:
    Item(string,float,int);
    string getItemDetails();
};
Item::Item(string name,float price,int quantity){
    this->name = name;
    this->price = price;
    this->quantity = quantity;
}
string Item::getItemDetails(){
    return name+' '+to_string(price)+' '+to_string(quantity);
}
int main()
{
   //Program to store and retrieve list of item in a file using std::vector<T>
   //class item should have name,price,quantity
    Item dal("dal",29,1);
    Item maggie("maggie",39,3);
    vector<Item> v;
    v.push_back(dal);
    v.push_back(maggie);
    vector<Item>::iterator itr;
    for(itr = v.begin();itr!=v.end();itr++) cout<<itr->getItemDetails()<<endl;
    return 0;
}
