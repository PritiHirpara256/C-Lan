#include<iostream>
using namespace std;
int main()
{
    int arr[5],arr1[5],arr2[5],i,sum=0;
    float pr;
    char grade;
    for(i=0;i<5;i++)
    {
        cout<<"enter guj marks:";
        cin>>arr[i];
    }   
    for(i=0;i<5;i++)
    {
        cout<<"enter eng marks:";
        cin>>arr1[i];
    }
     for(i=0;i<5;i++)
    {
        cout<<"enter maths marks:";
        cin>>arr2[i];
    }
    cout<<"guj\teng\tmaths\tsum\tpr\tgrade\n";
    for(i=0;i<5;i++)
    {
        sum=arr[i]+arr1[i]+arr2[i];
        pr = (sum*100)/300;
        cout<<arr[i]<<"\t"<<arr1[i]<<"\t"<<arr2[i]<<"\t"<<sum<<"\t"<<pr<<"\t"<<grade;
        if(arr[i]<35 || arr1[i]<35 || arr2[i]<35)
        {
            cout<<"F";
        }
        else if(pr>90)
        {
            cout<<"A";
        }else if(pr>80)
        {
            cout<<"B";
        }else if(pr>70)
        {
            cout<<"C";
        }else if(pr>60)
        {
            cout<<"E";
        }else 
        {
            cout<<"Fail";
        }
        cout<<"\n";
    }   
}