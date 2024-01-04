#include<iostream>
using namespace std;
class flight
{
    int fno;
    string destination;
    float distance,Fuel;
    int calfuel()
    {
        float fuel=0;
        if(distance<=1000)
        {
            fuel=500;
        }
        else if(distance<=2000)
        {
            fuel=1100;
        }
        else
        {
            fuel=2200;
        }
        return fuel;
    } 
    public:
    int feedinfo()
    {
        cout<<"Enter flight no."<<endl;
        cin>>fno;
        cout<<"Enter destination"<<endl;
        cin>>destination;
        cout<<"Enter distance"<<endl;
        cin>>distance;
        calfuel();
    }
    int showinfo()
    {
        cout<<"flight no:"<<fno<<endl;
        cout<<"destination:"<<destination<<endl;
        cout<<"distanc:"<<distance<<endl;
        cout<<"fuel:"<<calfuel()<<endl;
    }
};
int main()
{
    flight t;
    t.feedinfo();
    t.showinfo();
}