#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l, int b){
            l?length=l:1;
            b?breadth=b:1;
            //length = l;
            //breadth = b;
        }
        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }
        int getArea(){
            return length*breadth;
        }
        int setLength(int l){length=l;}
        int setBreadth(int b){breadth=b;}
};
class Cuboid:public Rectangle{
    private:
        int height;
    public:
        Cuboid( int l, int b, int h):Rectangle{l,b}{
           // setLength(l);
            //setBreadth(b);
            height = h;
        }
        int getHeight(){
            return height;
        }
        void setHeight(int h){
            height = h;
        }
        int getVolume(){
            return getArea()*height;
        }
};
int main(){
    Cuboid c(3,4,5);
    cout<<"Volume is<"<<c.getVolume()<<endl;
   // cout<<"Area"<<c.getArea()<<endl;
    //cout<<"breadth"<<c.getBreadth()<<endl;
    //cout<<"Cuboid's volume is"<<c.getArea();
}
