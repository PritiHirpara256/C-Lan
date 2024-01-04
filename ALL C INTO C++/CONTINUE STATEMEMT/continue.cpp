#include<iostream>
using namespace std;
int main()
{
 for(int i=1;i<=15;i++)
 {
    if(i==6 || i==12)
    {
        continue;
    }
    cout<<"\t"<<i;
 }   
}