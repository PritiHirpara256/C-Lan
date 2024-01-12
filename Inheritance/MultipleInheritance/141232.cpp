#include<iostream>
using namespace std;
class Base1
{
    protected:
    int a;
    public:
    void setA() 
    {
        cout<<"Enter value:";
        cin>>a;
    }   
};
class Base2
{
    protected:
    public:
    int i,p=1;  
};
class Derived : public Base1,public Base2
{
    public:
    void square()
    {
        for(i=1;i<=a;i++)
        {
            cout<<" "<<p*i;
            p=p*2;
        }
    }
};
int main()
{
    Derived s;
    s.setA();
    s.square();
}