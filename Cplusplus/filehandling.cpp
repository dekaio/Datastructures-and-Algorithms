
#include <fstream>

int main()
{
    ofstream outfile('mytxt', ios::app);
    outfile<<"Hello"<<endl;
    outfile.close();
    return 0;
}
