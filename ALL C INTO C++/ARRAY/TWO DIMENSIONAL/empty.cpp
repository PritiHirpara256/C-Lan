#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter value:";
            cin>>arr[i][j];
        }
    } cout<<"\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]==0)
            {
                cout<<"  ";
            }
            else
            {
                cout<<arr[i][j];
            }
        } 
        cout<<"\n";
    }
}