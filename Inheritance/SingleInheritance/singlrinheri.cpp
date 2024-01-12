#include<iostream>
using namespace std;
class Base
{
    protected:
    int a;
    public:
    void setA() 
    {
        cout<<"Enter a:";
        cin>>a;
    }   
};
class Derived : public Base
{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"Enter b:";
        cin>>b;
    }
    void getproduct()
    {
        cout<<"Product of a abd b is:"<<a*b<<endl;
    }
};
int main()
{
    Derived p;
    p.setA();
    p.setB();
    p.getproduct();
}