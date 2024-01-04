#include<iostream>
using namespace std;
int main()
{
    int i=1,n,p=1;
    cout<<"Enter value:";
    cin>>n;
    while(i<=n)
    {
        cout<<" "<<p;
        i++;
        p*=2;
    }   
}