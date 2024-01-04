#include<iostream>
using namespace std;
int main()
{
    int i=1;
    text:
    if(i<=15)
    {
        cout<<"\t"<<i;
        i++;
        goto text;
    }
}