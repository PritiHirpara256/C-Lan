#include<iostream>
using namespace std;
int main()
{
    int a=20,*p;
    p=&a;
    cout<<"value of a is:"<<a;
    cout<<"\naddress of a is:"<<&a;   
    cout<<"\naddress of a using p is:"<<p;
    cout<<"\naddress of p is:"<<&p;
    cout<<"\nvalue of a using p is:"<<*p;
}