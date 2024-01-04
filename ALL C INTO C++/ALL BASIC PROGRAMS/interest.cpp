#include<iostream>
using namespace std;
int main()
{
    float principal,rate,time,interest;
    cout<<"Enter the amount";
    cin>>principal;
    cout<<"Enter the rate";
    cin>>rate;
    cout<<"Enter the days";
    cin>>time;
    interest=(principal*rate*time)/10000;
    cout<<"simple interest:"<<interest;
}