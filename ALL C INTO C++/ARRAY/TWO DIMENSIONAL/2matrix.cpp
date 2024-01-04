#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],arr1[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter value:";
            cin>>arr[i][j];
        }
    }   
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter value:";
            cin>>arr1[i][j];
        }
    }   
    cout<<"\n\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j];
        }cout<<"\t";
        for(j=0;j<3;j++)
        {
            cout<<arr1[i][j];
        }cout<<"\n";
    }   
}