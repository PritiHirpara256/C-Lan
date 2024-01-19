#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //file write
    char input[50];
    ofstream os;
    os.open("file3.txt");
    cout<<"writing to a text file:"<<endl;
    cout<<"please Enter your name:"<<endl;
    cin.getline(input,100);
    os<<input<<endl;
    cout<<"Please Enter Contact Number:"<<endl;
    cin>>input;
    cin.ignore();
    os<<input<<endl;
    os.close();

    //file read
    ifstream is;
    string line;
    is.open("file3.txt");
    cout<<"Reading from a text file"<<endl;
    while(getline(is,line))
    {
        cout<<line<<endl;
    }
    is.close();
}
