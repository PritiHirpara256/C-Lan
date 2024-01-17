#include<iostream>
using namespace std;
class Base
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"Enter A Value :- ";
        cin>>a;
    }
};
class ABC : public Base
{
    protected:
    int i,b;
    public:
    void setB()
    {
        for(i=1;i<=a;i++)
        {
            b=i*i*i;
            cout<<" "<<b;
        }
        cout<<endl;
    }
};
class PQR
{
    public:
    int t;
    int setC(int n)
    {
        if(n==1)
        {
            return 1;
        }
        else
        {
            return n*setC(n-1);
        }
    }
    void fact()
    {
        int t=setC(3);
        cout<<"Factorial Number Is :- "<<t;
    }
};
int main()
{
    ABC a;
    a.setA();
    a.setB();

    PQR b;
    b.fact();
    b.setC(0);
}