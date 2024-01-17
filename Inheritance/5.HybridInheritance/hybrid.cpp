#include<iostream>
using namespace std;
class Base
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"Enter a : ";
        cin>>a;
    }
};
class ABC : public Base
{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"Enter b : ";
        cin>>b;
    }
};
class PQR
{
    protected:
    int c;
    public:
    void setC()
    {
        cout<<"Enter c : ";
        cin>>c;
    }
};
class Derived : public PQR , public ABC 
{
    public:
    void product()
    {
        cout<<"product of a,b and c is: "<<a*b*c<<endl;
    }
};
int main()
{
    Derived d;
    d.setA();
    d.setB();
    d.setC();
    d.product();
}