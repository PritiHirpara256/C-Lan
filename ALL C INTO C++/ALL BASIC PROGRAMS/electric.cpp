#include<iostream>
using namespace std;
int main()
{
    int unit;
    float charge,surch;
    cout<<"Enter unit:";
    cin>>unit;
    if(unit<=100)
    {
        charge=unit*0.60+50;
    }
    else if(unit<=300)
    {
        charge=50+60+160+(unit-100)*0.90;
    }
    else 
    {
        charge=50+60+160+(unit-300)*0.90;
    }
    cout<<"bill:"<<charge;
    if(charge>=300)
    {
        surch=charge+(charge*0.15);
        cout<<"\nyour final bill is:"<<surch;
    }
}