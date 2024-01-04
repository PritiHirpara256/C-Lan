#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter character:";
    cin>>a;
    if(a>=65 && a<=90)
    {
        a=a+32;
        cout<<"Lowercase character:"<<a;
    }   
    else
    {
        a=a-32;
        cout<<"Uppercase character:"<<a;
    }   
}