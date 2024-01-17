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
    int i,p;
    public:
    void square()
    {
        for(i=1;i<=a;i++)
        {
            p=i*i;
            cout<<" "<<p<<endl;
        }
    }
};
class PQR : public Base
{
    protected:
    int i,j;
    public:
    void table()
    {
        for(i=1;i<=10;i++)
        {
            j=a*i;
            cout<<a<<" * "<<i<<" = "<<j<<endl;
        }
    }
};
int main()
{
    ABC a;
    a.setA();
    a.square();
    PQR p;
    p.setA();
    p.table();
}