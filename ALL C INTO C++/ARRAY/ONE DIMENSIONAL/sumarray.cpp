#include<iostream>
using namespace std;
int main()
{
    int arr[5],arr1[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        cout<<"enter value:";
        cin>>arr[i];
    }   
    for(i=0;i<5;i++)
    {
        cout<<"enter value:";
        cin>>arr1[i];
    }
    for(i=0;i<5;i++)
    {
        sum=arr[i]+arr1[i];
        cout<<arr[i]<<"\t"<<arr1[i]<<"\t"<<sum;
        cout<<"\n";
    }   
}