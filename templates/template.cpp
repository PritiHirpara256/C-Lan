#include<iostream>
using namespace std;
template<class T>
void display(T t1)
{
    cout<<"Displaying Template: "<<t1<<endl;
}
template<class x , class y>
void display(x a,y b)
{
    cout<<"Displaying Template: "<<a<<"\t"<<b<<endl;
}
template<class x , class y>
void Addition(x a,y b)
{
    cout<<"sum: "<<a+b<<endl;
}
int main()
{
    display(200);
    display(12.56);
    display('G');
    display('G',1.25);
    display('X',25);
    display(25,1.25);
    Addition(25,33);
    Addition(3.66,33);
    Addition(3.66,'A');
}