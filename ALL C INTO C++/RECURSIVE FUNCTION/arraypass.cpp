#include<iostream>
using namespace std;
void display(int a[])
{
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
}
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        cout<<"Enter value:";
        cin>>a[i];
    }
    display(a);
}