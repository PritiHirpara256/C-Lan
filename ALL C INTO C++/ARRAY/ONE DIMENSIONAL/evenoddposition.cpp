#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,odd=0,even=0;
    for(i=0;i<5;i++)
    {
        cout<<"Enter value:";
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        if(i%2==0)
        {
            odd=odd+arr[i];
        }
        else
        {
            even=even+arr[i];
        }
    }
    cout<<"sum of even position:"<<even;
    cout<<"\nsum of odd position:"<<odd;    
}