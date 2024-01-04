#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"Enter value:";
    cin>>n;
    while(i<=n)
    {
      if(i%2==0)
      {
        cout<<" "<<i*i;
      } 
      else
      {
         cout<<" "<<i;
      }
         i++;
    }   
}