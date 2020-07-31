
#include <iostream>
using namespace std;
class Element{
    public:
    int i;
    int j;
    int x;
    
};
class Sparse: public Element{
    private:
        int m;
        int n;
        int num;
        Element *ele;
    public:
        Sparse(int m, int n,int num){
            this->m = m;
            this->n = n;
            this->num = num;
            ele = new Element[this->num];
        }
        ~Sparse(){
            delete [] ele;
        }
        Sparse operator+(Sparse &s);
        friend istream & operator>>(istream &is, Sparse &s);
        friend ostream & operator<<(ostream &os, Sparse &s);
};
Sparse Sparse::operator+(Sparse &s){
    int i=0,j=0,k=0;
    //if (m!=s.m || n!=s.n){
      //  return NULL;
    //}
    Sparse *adm = new Sparse(m,n,num+s.m);
    while(i<num && j<s.num){
        if (ele[i].i<s.ele[j].i){
            adm->ele[k++] = ele[i++];
        }
        else if (ele[i].i > s.ele[j].i){
            adm->ele[k++] = s.ele[j++];
        }
        else {
            if (ele[i].j<s.ele[j].j){
                adm->ele[k++] = ele[i++];
            }
            else if (ele[i].j>s.ele[j].j){
                adm->ele[k++] = s.ele[j++];
            }
            else{
                adm->ele[k] = ele[i];
                adm->ele[k++].x = ele[i++].x + s.ele[j++].x;
            }
        }
        for (;i<num;i++)adm->ele[k++] = ele[i++];
        for (;j<s.num;j++)adm->ele[k++] = s.ele[j++];
        adm->num = k;
    }
    return *adm;
}
istream & operator>>(istream &is, Sparse &s){
    cout<<"Enter number of non zero elements";
    cin>>s.num;
    cout <<"Enter row,column,val of non zero elements";
    for(int i=0;i<s.num;i++){
      cin>>s.ele[i].i>>s.ele[i].j>>s.ele[i].x; 
      cout<<"\n";
    }
    return is;
}
ostream & operator<<(ostream &os, Sparse &s){
    int k;
    for (int i=0;i<s.m;i++){
        for (int j=0;j<s.n;j++){
            if (s.ele[k].i==i && s.ele[k].j==j){
                cout<<s.ele[k++].x;
            }
            else cout<<0;
        }
        cout<<"\n";
    }
    return os;
}
    

int main()
{
    Sparse mat1(4,4,4);
    Sparse mat2(4,4,4);
    cout<<"Enter matrix 1\n";
    cin>>mat1;
    cout<<"Enter matrix 2\n";
    cin>>mat2;
    Sparse sum = mat1+mat2;
    cout<<"First matrix"<<endl<<mat1;
    cout<<"Second matrix"<<endl<<mat2;
    cout<<sum;
    return 0;
}
