#include<iostream>
using namespace std;
int main()
{
    int slab;
    cout<<"Enter income:";
    cin>>slab;
    if(slab<=2500)
    {
        slab=slab*0.00;
    }
    else if(slab<=5000)
    {
       slab=slab*0.10;
    }
    else if(slab<=10000)
    {
        slab=slab*0.20;
    }
    else 
    {
        slab=slab*0.30;
    }
    cout<<"your tax:"<<slab;
}