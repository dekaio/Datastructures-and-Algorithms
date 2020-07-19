
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
int main()
{
    Diagonal mat(4);
    mat.SetMatrix(1,1,3);
    mat.DisplayMatrix();

    return 0;
}
