
#include <iostream>
using namespace std;
class Diagonal{
    private:
        int *A;
        int size;
    public:
        Diagonal(){
            size = 2;
            A = new int[2];
        }
        Diagonal(int n){
            this->size = n;
            A = new int[n];
        }
        ~Diagonal(){
            delete []A;
        }
        void SetMatrix(int, int, int);
        int GetMatrix(int, int);
        void DisplayMatrix();
};
void Diagonal::SetMatrix(int i, int j, int val){
    if (i==j){
        A[i-1] = val;
    }
}
int Diagonal::GetMatrix(int i, int j){
    if (i==j){
        return A[i];
    }
    else return 0;
}
void Diagonal::DisplayMatrix(){
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            if (i==j) cout<<A[i];
            else cout<<0;
        }
    }
}
class LowerTri{
    private:
        int size;
        int *A;
    public:
        LowerTri(){
            size = 2;
            A = new int[size*(size+1)/2];
        }
        LowerTri(int n){
            size = n;
            A = new int[size*(size+1)/2];
        }
        ~LowerTri(){
            delete []A;
        }
        void SetRowMatrix(int, int, int);
        void SetColumnMatrix(int, int, int);
        int GetRowMatrix(int, int);
        int GetColMatrix(int, int);
        void DisplayMatrix();
        void DisplayColMatrix();
};
void LowerTri::SetRowMatrix(int i, int j, int x){
    if (i>=j){
        int index = i*(i-1)/2+j-1;
      //  printf("%d",index);
        A[index] = x;
    }
}
void LowerTri::SetColumnMatrix(int i, int j, int x){
    int index = 0;
    if (i>=j){
        index = size*(j-1)-j*(j-1)/2 +i-1;
        A[index] = x;
    }
}
int LowerTri::GetRowMatrix(int i, int j){
    int index = 0;
    if (i>=j){
       index = i*(i-1)/2+j-1; 
       return A[index];
    }
    else return 0;
}
int LowerTri::GetColMatrix(int i, int j){
    int index = 0;
    if (i>=j){
        index = size*(j-1) - j*(j-1)/2+i-1;
        return A[index];
    }
    else return 0;
}
void LowerTri::DisplayMatrix(){
    for (int i=1;i<=size;i++){
        for (int j=1;j<=size;j++){
            if (i>=j){
                int index = i*(i-1)/2+j-1;
                //printf("%d",index);
                cout<<A[index];
            }
            else{
                cout<<0;
            }
        }
    }
}
void LowerTri::DisplayColMatrix(){
    for (int i=1;i<=size;i++){
        for (int j=1;j<=size;j++){
            if (i>=j){
                int index = size*(j-1)-(j-1)*j/2 +i-1;
                cout<<A[index];
            }
            else{
                cout<<0;
            }
        }
    }
}
int main()
{
    Diagonal mat(4);
    mat.SetMatrix(1,1,3);
    mat.DisplayMatrix();

    return 0;
}
