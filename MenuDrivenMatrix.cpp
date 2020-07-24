# include<iostream>
using namespace std;
class Matrix{
    private:
        int *A;
        int n;
    public:
        Matrix(int);
        void Create();
        void Set(int, int, int);
        int Get(int, int);
        void Display();
        ~Matrix();
};
Matrix::Matrix(int n){
    this->n = n;
    A = new int[n];
}
Matrix::~Matrix(){
    delete []A;
}
void Matrix::Create(){
    for (int i=1;i<=n;i++){
        for (int j=0;j<=n;j++){
            if (i==j)
                cin>>A[i-1];
        }
    }
}
int Matrix::Get(int i, int j){
    if (i==j){
        cout<<A[i-1];   
    }
    else{
        cout<<0;
    }
}
void Matrix::Set(int i, int j, int val){
    if (i==j){
        A[i-1]=val;
    }
}
void Matrix::Display(){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            Get(i,j);
        }
    }
}
int main(){
    Matrix mat(4);
    int ch,i,j,val;
    do {
        cout<<"1.Create 2.Set 3.Get 4.Display 5.Exit";
        cin>>ch;
        switch(ch){
            case 1: {
                cout<<"Enter elements here";
                mat.Create();break;
            }
            case 2: {
                cout<<"Enter the row index";cin>>i;
                cout<<"Enter the column index";cin>>j;
                cout<<"Enter the new value";cin>>val;
                mat.Set(i,j,val);break;
            }
            case 3:{
                cout<<"Enter the row index";cin>>i;
                cout<<"Enter the column index";cin>>j;
                cout<<mat.Get(i,j);
                cout<<"\n";break;
            }
            case 4:{
                mat.Display();break;
            }
        }
    }while(ch!=5);
    return 0;
}
