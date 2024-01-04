#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter value:";
    cin>>a;
    cout<<"\nEnter value:";
    cin>>b;
    cout<<"\nEnter value:";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"A is large";
    }
    else if(b>a && b>c)
     {
        cout<<"B is large";
    }
    else
     {
        cout<<"C is large";
    }
}