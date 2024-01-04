#include<iostream>
using namespace std;
int main()
{
    int m,s,e,t;
    float pr;
    cout<<"Enter maths marks:";
    cin>>m;
    cout<<"Enter science marks:";
    cin>>s;
    cout<<"Enter eng marks:";
    cin>>e;
    t=m+s+e;
    cout<<"total marks:"<<t;
    pr=(t*100)/300;
    cout<<"percentage"<<pr;
}