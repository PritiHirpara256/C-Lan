#include<iostream>
using namespace std;
int main()
{
    float a=0.5,i=0.5,n;
    cout<<"Enter value:";
    cin>>n;
    cout<<a;
    while (i<=n)
    {
        cout<<"\n"<<a+i;
       a=a+i;
       i++;
    }
       
}