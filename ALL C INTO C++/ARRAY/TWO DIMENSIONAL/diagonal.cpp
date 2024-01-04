#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],i,j,sum=0,sum1=0,sum2=0;;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter value:";
            cin>>arr[i][j];
        }
    }     
    cout<<"\n\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j];
        }cout<<"\n";
    }  
    //diagonal matrix: 
    for(i=0;i<j;i++)
    {
        sum=sum+arr[i][i];
    }
    cout<<"sum of diagonal element:"<<sum;
    //upper triangle sum:
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i<j)
                {
                    sum1+=arr[i][j];
                }
            }
        }
        cout<<"\nsum of upper triangle element:"<<sum1;
    //lower triangle sum:
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i>j)
                {
                    sum2+=arr[i][j];
                }
            }
        }
        cout<<"\nsum of lower triangle element:"<<sum2;
}