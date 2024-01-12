#include<iostream>
using namespace std;
class Base
{
    protected:
    int a;
    public:
    void setA() 
    {
        cout<<"Enter number:";
        cin>>a;
    }   
};
class Derived : public Base
{
    protected:
    int i,p;
    public:
    void getproduct()
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
    s.getproduct();
}