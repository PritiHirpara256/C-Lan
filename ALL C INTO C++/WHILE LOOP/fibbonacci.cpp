#include<iostream>
using namespace std;
int main()
{
    int i=1,n,a=0,b=1,p;
    cout<<"Enter value:";
    cin>>n;
    while(i<=n)
    {
        p=a+b;
        a=b;
        b=p;
        cout<<" "<<p;
        i++;
    }   
}