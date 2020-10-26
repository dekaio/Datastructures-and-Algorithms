
#include <fstream>

int main()
{
    ofstream outfile('mytxt', ios::app);
    outfile<<"Hello"<<endl;
    outfile.close();
    ifstream infile;
    infile.open('mytxt', ios::in);
    string st; int x;
    if (!infile):
        cout<<"file cannot be opened";
    else{
        infile>>st;
        infile>>x;
        cout<<st<<" "<<x;
        if(infile.eof()) cout<<"end of file";
    }
    infile.close();
    return 0;
}
