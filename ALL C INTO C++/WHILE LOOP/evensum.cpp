#include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0;
    while(i<=10)
    {
        if(i%2==0)
        sum+=i;
        i++;
    }   
    cout<<" "<<sum;
}