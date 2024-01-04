#include<iostream>
using namespace std;
int main()
{
    int a=20,b=6,ch;
    cout<<"1.Add\n";
    cout<<"2.substract\n";    
    cout<<"3.multiply\n";
    cout<<"4.division\n";
    cout<<"Enter your choice:\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"Addition:"<<a+b;
        break;
        case 2:
        cout<<"substraction:"<<a-b;
        break;
        case 3:
        cout<<"multiplication:"<<a*b;
        break;
        case 4:
        cout<<"division:"<<b/a;
        break;
        default:
        cout<<"wrong chioce:";
        break;
    }
}