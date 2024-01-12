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
    int i,p;  
};
class Derived : public Base1,public Base2
{
    public:
    void square()
    {
        for(i=1;i<=a;i++)
        {
            p=i*i;
            cout<<" "<<p;
        }
    }
};
int main()
{
    Derived s;
    s.setA();
    s.square();
}