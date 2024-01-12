#include<iostream>
using namespace std;
class Base1
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"Enter Value :- ";
        cin>>a;
    }
};
class Base2 : public Base1
{
    protected:
    int b,i;
};
class Derived : public Base2
{
   
    public:
    void setB()
    {
        for(i=1;i<=a;i++)
        {
            b=i*i*i;
            cout<<" "<<b;
        }
    }
};
int main()
{
    Derived d;
    d.setA();
    d.setB();
}''