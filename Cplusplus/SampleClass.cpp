#include<iostream>
using namespace std;
class Student{
    private:
    int roll;
    string name;
    float mark1;
    float mark2;
    float mark3;
    public:
    Student(int,string,float,float,float);
    float totalMarks();
    float grade();
    ~Student();
};
Student::Student(int roll, string name,float mark1, float mark2, float mark3){
    this->roll = roll;
    this->name = name;
    this->mark1 = mark1;
    this->mark2 = mark2;
    this->mark3 = mark3;
}
float Student::totalMarks(){
    return mark1+mark2+mark3;
}
float Student::grade(){
    return (mark1+mark2+mark3)/3;
}
Student::~Student(){
 cout<<"Student is deleted";   
}
int main(){
    Student maria(12,"maria",43,34,45);
    cout<<"total marks is "<<maria.totalMarks()<<endl;
    cout<<"grade is "<<maria.grade()<<endl;
    return 0;
}
