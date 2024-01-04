#include<iostream>
using namespace std;
int main()
{
    char i=65,a=97;
    while(i<=90)
    {
       if(i%4==1)
       { 
        cout<<" "<<i;
        }
        else if(i%2==1)
        {
             cout<<" "<<a;
             a+=2;
        }
        i++; 
    } 
}