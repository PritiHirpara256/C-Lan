#include<iostream>
using namespace std;
class Base
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"enter a: ";
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
        cout<<"enter b: ";
        cin>>b;
    }
    void product()
    {
        cout<<"product of a and b is: "<<a*b<<endl;
    }
};
class PQR : public Base
{
    protected:
    int c;
    public:
    void setC()
    {
        cout<<"enter c: ";
        cin>>c;
    }
    void Addition()
    {
        cout<<"product of a and c is: "<<a+c<<endl;
    }
};
int main()
{
    ABC a;
    a.setA();
    a.setB();
    a.product();
    PQR p;
    p.setA();
    p.setC();
    p.Addition();
}