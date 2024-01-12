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
class Base2 : public Base1
{
    protected:
    public:
    int i,p=1;  
};
class Derived : public Base2
{
    public:
    void series()
    {
        for(i=1;i<=a;i++)
        {
            if(i%2==0)
            {
                cout<<"  "<<i*i;
            }
            else
            {
                cout<<"  "<<i;
            }
        }
    }
};
int main()
{
    Derived s;
    s.setA();
    s.series();
}