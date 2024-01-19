#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fs("file1.txt");
    if(fs.is_open())
    {
        fs<<"Welcome to skillqode";
        fs<<"\nWe started new lab";
        fs<<"\nWe started new branch";
        fs.close();
    }
    else
    cout<<"File opening is fail.";
}
