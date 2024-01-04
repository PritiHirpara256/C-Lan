#include<iostream>
using namespace std;
int main()
{
    char i,p=33;
    cout<<"Enter value:";
    for(i=65;i<=90;i++)
    {
        cout<<" "<<i<<p+32;
        p++;
    }
}