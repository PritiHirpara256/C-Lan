#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,evensum=0,oddsum=0,totalsum=0;
    for(i=0;i<5;i++)
    {
        cout<<"Enter valur:";
        cin>>arr[i];
    }   
    for(i=0;i<5;i++)
    {
        totalsum=totalsum+arr[i];
        if(arr[i]%2==0)
        {
            evensum=evensum+arr[i];
        }
        else
        {
            oddsum=oddsum+arr[i];
        }
    }
    cout<<"sum of even element:"<<evensum;
    cout<<"\nsum of odd element:"<<oddsum;
    cout<<"\nsum of all element:"<<totalsum;
}